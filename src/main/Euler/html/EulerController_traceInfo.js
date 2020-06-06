function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "EulerController"};
	this.sidHashMap["EulerController"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Error"] = {sid: "EulerController:2"};
	this.sidHashMap["EulerController:2"] = {rtwname: "<Root>/Error"};
	this.rtwnameHashMap["<Root>/Forward differencing Transformation"] = {sid: "EulerController:1"};
	this.sidHashMap["EulerController:1"] = {rtwname: "<Root>/Forward differencing Transformation"};
	this.rtwnameHashMap["<Root>/Manipulated"] = {sid: "EulerController:3"};
	this.sidHashMap["EulerController:3"] = {rtwname: "<Root>/Manipulated"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
