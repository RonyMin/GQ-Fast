package gqfast.codeGenerator;

import gqfast.global.Alias;
import gqfast.global.Global.Optypes;

import java.util.List;

public class JoinOperator extends Operator {
	
	private  boolean entityFlag; // ENTITY = 1; RELATIONSHIP = 0
	private List<Integer> columnIDs;  //for SD query, 0 (for term)
	
	private Alias alias; // (dt2)
	
	private Alias drivingAlias; //(dt1)
	private int drivingAliasColumn; //(term column id in dt1)


	
	public JoinOperator(boolean entityFlag, List<Integer> columnIDs,  Alias alias, Alias drivingAlias, int drivingAliasColumn) {
		super(Optypes.JOIN_OPERATOR);
		this.entityFlag = entityFlag;
		this.columnIDs = columnIDs;
		this.alias = alias;
		this.drivingAlias = drivingAlias;
		this.drivingAliasColumn = drivingAliasColumn;

	}

	public boolean isEntityFlag() {
		return entityFlag;
	}



	public List<Integer> getColumnIDs() {
		return columnIDs;
	}



	public Alias getAlias() {
		return alias;
	}

	public Alias getDrivingAlias() {
		return drivingAlias;
	}



	public int getDrivingAliasColumn() {
		return drivingAliasColumn;
	}
	



}
