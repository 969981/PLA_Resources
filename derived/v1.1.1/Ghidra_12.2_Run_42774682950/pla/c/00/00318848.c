/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00318848; name: FUN_00318848
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_00318848(long param_1,long *param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 extraout_x1;
  long lVar9;
  undefined8 uVar10;
  undefined ***local_d0;
  long *local_c8;
  byte local_c0;
  undefined8 local_b0;
  int local_a8;
  undefined **local_90;
  long *local_88;
  byte local_80 [16];
  undefined8 local_70;
  int local_68;
  undefined1 auStack_60 [16];
  long local_50;
  undefined *puStack_48;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  puVar2 = PTR_LAB_04373a98;
  puVar3 = *(ulong **)(param_1 + 0x30);
  if ((puVar3 != (ulong *)0x0) &&
     (puStack_48 = PTR_LAB_04373a98, local_50 = param_1, *puVar3 != 0xffffffffffffffff)) {
    local_90 = &puStack_48;
    local_88 = &local_50;
    local_d0 = &local_90;
    std::__call_once(puVar3,&local_d0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
  }
  if ((*(int *)(param_1 + 0x38) == 0xb) && (uVar4 = FUN_00344344(param_1), (uVar4 & 1) != 0)) {
    plVar5 = (long *)FUN_0038e920(extraout_x1,param_2,param_1);
    uVar4 = FUN_00395ca8();
    if ((uVar4 & 1) != 0) {
      FUN_00319b40(&local_90,param_2,param_1);
                    /* try { // try from 00318900 to 0031890f has its CatchHandler @ 00319114 */
      FUN_00319b40(&local_d0,param_2,param_1);
                    /* try { // try from 00318910 to 00318917 has its CatchHandler @ 00319110 */
      lVar6 = FUN_00342dac(param_1);
      uVar10 = *(undefined8 *)(lVar6 + 0x28);
                    /* try { // try from 0031891c to 0031894f has its CatchHandler @ 0031911c */
      lVar6 = FUN_00342dac(param_1);
      lVar9 = *(long *)(lVar6 + 0x28);
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_90);
      (**(code **)(*plVar5 + 0x38))(plVar5,&local_d0);
      lVar6 = 0;
                    /* try { // try from 00318970 to 0031897b has its CatchHandler @ 00319138 */
      while (uVar4 = (**(code **)(*local_88 + 0x28))(local_88,&local_90,&local_d0), (uVar4 & 1) == 0
            ) {
                    /* try { // try from 00318980 to 0031899b has its CatchHandler @ 00319134 */
        lVar7 = FUN_00319da0(uVar10,local_80);
        lVar8 = FUN_0031a060(lVar9 + 0x98,auStack_60);
        lVar7 = lVar7 + lVar8 + 2;
        lVar6 = lVar7 + lVar6 + (ulong)(((uint)LZCOUNT((uint)lVar7 | 1) ^ 0x1f) * 9 + 0x49 >> 6);
                    /* try { // try from 003189d0 to 003189d7 has its CatchHandler @ 00319138 */
        (**(code **)(*local_88 + 0x90))(local_88,&local_90);
      }
                    /* try { // try from 00318acc to 00318ad7 has its CatchHandler @ 003190fc */
      (**(code **)(*local_c8 + 0x80))(local_c8,&local_d0);
      if ((local_a8 == 9) && ((local_c0 & 1) != 0)) {
        FUN_002e2ea0(PTR_LAB_04373088,local_b0);
      }
                    /* try { // try from 00318b08 to 00318b0f has its CatchHandler @ 003190e8 */
      (**(code **)(*local_88 + 0x80))(local_88,&local_90);
      if (local_68 != 9) {
        return lVar6;
      }
      if ((local_80[0] & 1) == 0) {
        return lVar6;
      }
      FUN_002e2ea0(PTR_LAB_04373088,local_70);
      return lVar6;
    }
  }
  if (*(int *)(param_1 + 0x3c) == 3) {
    FUN_00386cec(extraout_x1,param_2,param_1);
    puVar3 = *(ulong **)(param_1 + 0x30);
  }
  else if (*(char *)(*(long *)(*(long *)(param_1 + 0x50) + 0x20) + 0x4b) == '\0') {
    FUN_00386684(extraout_x1,param_2,param_1);
    puVar3 = *(ulong **)(param_1 + 0x30);
  }
  else {
    puVar3 = *(ulong **)(param_1 + 0x30);
  }
  if ((puVar3 == (ulong *)0x0) ||
     (puStack_48 = puVar2, local_50 = param_1, *puVar3 == 0xffffffffffffffff)) {
    iVar1 = *(int *)(param_1 + 0x38);
  }
  else {
    local_90 = &puStack_48;
    local_88 = &local_50;
    local_d0 = &local_90;
    std::__call_once(puVar3,&local_d0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    iVar1 = *(int *)(param_1 + 0x38);
  }
  if (iVar1 - 1U < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x00318a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar6 = (*(code *)(&UNK_00318a60 +
                      (ulong)*(ushort *)(&DAT_039f9ce6 + (ulong)(iVar1 - 1U) * 2) * 4))();
    return lVar6;
  }
  return 0;
}


