modded class SCR_BaseLockComponent : ScriptComponent
{
	[Attribute("0", UIWidgets.ComboBox, "Lock state", "", { ParamEnum("DEFAULT", "0"), ParamEnum("UNLOCKED", "1"), ParamEnum("LOCKED", "2") })]
	private int m_iLockState;
	
	override bool IsLocked(IEntity user, BaseCompartmentSlot compartmentSlot)
	{
		if (m_iLockState == 2)
			return true;
		
		if (!user || !compartmentSlot)
			return false;
		
		if (m_iLockState == 1)
			return false;
				
		if (m_pVehicleSpawnProtection)	
			return m_pVehicleSpawnProtection.IsProtected(user, compartmentSlot);
		
		return false;
	}
};
