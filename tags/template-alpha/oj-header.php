<?php function checkcontest($MSG_CONTEST){
		require_once("./include/db_info.inc.php");
		$sql="SELECT count(*) FROM `contest` WHERE `end_time`>NOW() AND `defunct`='N'";
		$result=mysql_query($sql);
		$row=mysql_fetch_row($result);
		if (intval($row[0])==0) $retmsg=$MSG_CONTEST;
		else $retmsg=$row[0]."<span class=red>&nbsp;$MSG_CONTEST</span>";
		mysql_free_result($result);
		return $retmsg;
	}
	
	
	

	if($OJ_ONLINE){
		require_once('./include/online.php');
		$on = new online();
	}

	$url=basename($_SERVER['REQUEST_URI']);
	$view_marquee_msg=file_get_contents($OJ_SAE?"saestor://web/msg.txt":"./admin/msg.txt");
	require("template/".$OJ_TEMPLATE."/oj-header.html");
?>

