/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00319b40; name: FUN_00319b40
 */


void FUN_00319b40(long param_1,long *param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  undefined8 extraout_x1;
  ulong local_78 [4];
  undefined *puStack_58;
  undefined **local_50;
  ulong *puStack_48;
  undefined ***local_38;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  pbVar1 = (byte *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x38) = 0;
                    /* try { // try from 00319b78 to 00319b9b has its CatchHandler @ 00319d70 */
  (**(code **)(*param_2 + 0x98))(param_2);
  uVar5 = FUN_0038e870(extraout_x1,param_2,param_3);
  *(undefined8 *)(param_1 + 8) = uVar5;
  uVar5 = FUN_00342dac(param_3);
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[0] = 0x79656b06;
                    /* try { // try from 00319bb8 to 00319c07 has its CatchHandler @ 00319d44 */
  lVar6 = FUN_00342fe4(uVar5,local_78);
  puVar3 = PTR_LAB_04373a98;
  puVar7 = *(ulong **)(lVar6 + 0x30);
  if (puVar7 != (ulong *)0x0) {
    puStack_58 = PTR_LAB_04373a98;
    local_78[3] = lVar6;
    if (*puVar7 != 0xffffffffffffffff) {
      local_50 = &puStack_58;
      puStack_48 = local_78 + 3;
      local_38 = &local_50;
      std::__call_once(puVar7,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  puVar4 = PTR_DAT_04373ab0;
  iVar2 = *(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(lVar6 + 0x38) * 4);
  if (*(int *)(param_1 + 0x28) != iVar2) {
    if ((*(int *)(param_1 + 0x28) == 9) && ((*pbVar1 & 1) != 0)) {
      FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(param_1 + 0x20));
    }
    *(int *)(param_1 + 0x28) = iVar2;
    if (iVar2 == 9) {
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
  if ((local_78[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_78[2]);
  }
                    /* try { // try from 00319c70 to 00319c77 has its CatchHandler @ 00319d70 */
  uVar5 = FUN_00342dac(param_3);
  local_78[1] = 0;
  local_78[2] = 0;
  local_78[0] = 0x65756c61760a;
                    /* try { // try from 00319c9c to 00319ce3 has its CatchHandler @ 00319d34 */
  lVar6 = FUN_00342fe4(uVar5,local_78);
  puVar7 = *(ulong **)(lVar6 + 0x30);
  if (puVar7 != (ulong *)0x0) {
    puStack_58 = puVar3;
    local_78[3] = lVar6;
    if (*puVar7 != 0xffffffffffffffff) {
      local_50 = &puStack_58;
      puStack_48 = local_78 + 3;
      local_38 = &local_50;
      std::__call_once(puVar7,&local_38,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(puVar4 + (ulong)*(uint *)(lVar6 + 0x38) * 4);
  if ((local_78[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_78[2]);
  }
                    /* try { // try from 00319d14 to 00319d1b has its CatchHandler @ 00319d70 */
  (**(code **)(**(long **)(param_1 + 8) + 0x78))(*(long **)(param_1 + 8),param_1);
  return;
}


