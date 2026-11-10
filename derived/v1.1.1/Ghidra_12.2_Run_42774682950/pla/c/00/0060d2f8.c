/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0060d2f8; name: FUN_0060d2f8
 */


undefined8 FUN_0060d2f8(long param_1,undefined8 param_2)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  byte local_90 [16];
  undefined8 local_80;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_24 [2];
  char local_18 [4];
  undefined1 auStack_14 [4];
  
  uVar2 = FUN_0060b61c(param_2,auStack_14);
  if ((((uVar2 & 1) == 0) || (uVar2 = FUN_0060b61c(param_2,local_18), (uVar2 & 1) == 0)) ||
     (uVar2 = FUN_0060b6b4(param_2,local_24), (uVar2 & 1) == 0)) {
LAB_0060d468:
    uVar4 = 0;
  }
  else {
    if (local_18[0] == '\x02') {
      if ((*(short *)(param_1 + 10) != 0x14) ||
         (uVar2 = FUN_0060b654(param_2,&local_a0,0x10), (uVar2 & 1) == 0)) goto LAB_0060d468;
      local_40 = 0x1c;
      local_48 = PTR_DAT_04375300 + 0x10;
      uStack_34 = (undefined4)uStack_98;
      uStack_30 = (undefined4)((ulong)uStack_98 >> 0x20);
      local_3c = local_a0;
      uStack_38 = uStack_9c;
                    /* try { // try from 0060d404 to 0060d40f has its CatchHandler @ 0060d480 */
      FUN_00609f60(local_90,&local_48,local_24[0]);
                    /* try { // try from 0060d414 to 0060d427 has its CatchHandler @ 0060d498 */
      FUN_0060a008(param_1 + 0x10,local_90);
      lVar3 = FUN_0060a078(param_1 + 0x10);
    }
    else {
      if (((local_18[0] != '\x01') || (*(short *)(param_1 + 10) != 8)) ||
         (uVar2 = FUN_0060b654(param_2,&local_a0,4), (uVar2 & 1) == 0)) goto LAB_0060d468;
      local_40 = 2;
      local_3c = local_a0;
      local_48 = PTR_DAT_04375300 + 0x10;
      uStack_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
                    /* try { // try from 0060d398 to 0060d3a3 has its CatchHandler @ 0060d48c */
      FUN_00609f60(local_90,&local_48,local_24[0]);
                    /* try { // try from 0060d3a8 to 0060d3bb has its CatchHandler @ 0060d4ac */
      FUN_0060a008(param_1 + 0x10,local_90);
      lVar3 = FUN_0060a078(param_1 + 0x10);
    }
    uVar5 = 0x14;
    if (*(int *)(lVar3 + 8) != 0x1c) {
      uVar5 = 0;
    }
    uVar1 = 8;
    if (*(int *)(lVar3 + 8) != 2) {
      uVar1 = uVar5;
    }
    *(undefined2 *)(param_1 + 10) = uVar1;
    if ((local_90[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_80);
    }
    uVar4 = 1;
  }
  return uVar4;
}


