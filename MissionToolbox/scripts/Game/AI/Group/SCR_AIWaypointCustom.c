modded class SCR_AIWaypoint : AIWaypoint
{
	//[Attribute("0", UIWidgets.Range, "Set move speed")]
	[Attribute("0", UIWidgets.ComboBox, "Set move speed", "", { ParamEnum("IDLE", "0"), ParamEnum("WALK", "1"), ParamEnum("RUN", "2"), ParamEnum("SPRINT", "3") })]
	private int m_iMoveSpeed;
	
	int GetMoveSpeed() {
		return m_iMoveSpeed;
	}
};