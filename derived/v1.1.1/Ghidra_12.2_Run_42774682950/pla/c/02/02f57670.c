/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f57670; name: FUN_02f57670
 */


undefined8 FUN_02f57670(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar2 = FUN_02f59dd0();
  if ((uVar2 & 1) != 0) {
    return 1;
  }
  if (param_1 == (undefined8 *)0x0) {
LAB_02f57720:
    uVar3 = 2;
  }
  else {
    DAT_0442d1a8 = param_1[0x10];
    DAT_0442d1b0 = param_1[0x11];
    puVar1 = (undefined1 *)param_1[3];
    if ((undefined1 *)param_1[2] == (undefined1 *)0x0) {
      if ((((puVar1 != (undefined1 *)0x0) || (param_1[4] != 0)) || (param_1[5] != 0)) ||
         ((param_1[6] != 0 || (param_1[8] != 0)))) goto LAB_02f57720;
      local_38 = 0;
      uStack_30 = 0;
      DAT_0442d128 = &LAB_02f577e0;
      DAT_0442d130 = &LAB_02f577f0;
      DAT_0442d138 = &LAB_02f57800;
      DAT_0442d140 = &LAB_02f57850;
      DAT_0442d148 = &LAB_02f578b0;
      DAT_0442d150 = &LAB_02f57910;
      DAT_0442d158 = &LAB_02f57960;
      DAT_0442d160 = &LAB_02f579b0;
      DAT_0442d168 = &LAB_02f579c0;
      local_28 = param_1[9];
      local_48 = 0x1000;
      uStack_40 = 0;
      local_58 = DAT_0442d1a8;
      uStack_50 = DAT_0442d1b0;
      FUN_02f57ad0(0,&local_58);
      DAT_0442c0d8 = 1;
    }
    else {
      if (((puVar1 == (undefined1 *)0x0) || ((undefined1 *)param_1[4] == (undefined1 *)0x0)) ||
         (((undefined1 *)param_1[5] == (undefined1 *)0x0 ||
          (((undefined1 *)param_1[6] == (undefined1 *)0x0 ||
           ((undefined1 *)param_1[8] == (undefined1 *)0x0)))))) goto LAB_02f57720;
      DAT_0442d128 = (undefined1 *)*param_1;
      DAT_0442d130 = (undefined1 *)param_1[1];
      DAT_0442d160 = (undefined1 *)param_1[7];
      DAT_0442d138 = (undefined1 *)param_1[2];
      DAT_0442d140 = puVar1;
      DAT_0442d148 = (undefined1 *)param_1[4];
      DAT_0442d150 = (undefined1 *)param_1[5];
      DAT_0442d158 = (undefined1 *)param_1[6];
      DAT_0442d168 = (undefined1 *)param_1[8];
    }
    DAT_0442d170 = param_1[9];
    uVar3 = FUN_02f59db0();
  }
  return uVar3;
}


