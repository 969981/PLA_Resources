/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050d35c; name: FUN_0050d35c
 */


ulong * FUN_0050d35c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *__s;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_2 == param_1) {
    return param_1;
  }
  if ((*param_2 & 1) == 0) {
    FUN_0050da40(param_1,param_2 + 1,*param_2 >> 1);
    return param_1;
  }
  if ((*param_1 & 1) == 0) {
    __s = param_1 + 1;
LAB_0050d3b0:
    uVar3 = *param_1 >> 1;
    puVar2 = __s + uVar3 * 0x12 + -1;
    lVar4 = uVar3 + 1;
    while (lVar4 = lVar4 + -1, lVar4 != 0) {
      uVar1 = *puVar2;
      puVar2 = puVar2 + -0x12;
                    /* try { // try from 0050d3d4 to 0050d3d7 has its CatchHandler @ 0050d49c */
      FUN_002e4a10(uVar1);
    }
    memset(__s,0xab,uVar3 * 0x90);
    if ((*param_1 & 1) == 0) goto LAB_0050d40c;
  }
  else {
    __s = (ulong *)param_1[1];
    if (__s != (ulong *)0x0) goto LAB_0050d3b0;
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
LAB_0050d40c:
  if ((*param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("IsMemcpyOk::value || other_storage.GetIsAllocated()",
                  "external/com_google_absl\\absl/container/internal/inlined_vector.h",0x1b2,
                  "MemcpyFrom");
  }
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar1 = param_2[4];
  uVar3 = param_2[3];
  uVar6 = param_2[6];
  uVar5 = param_2[5];
  uVar8 = param_2[8];
  uVar7 = param_2[7];
  uVar9 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar9;
  param_1[8] = uVar8;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[5] = uVar5;
  param_1[4] = uVar1;
  param_1[3] = uVar3;
  uVar1 = param_2[0xc];
  uVar3 = param_2[0xb];
  uVar6 = param_2[0xe];
  uVar5 = param_2[0xd];
  uVar8 = param_2[0x10];
  uVar7 = param_2[0xf];
  uVar9 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar9;
  param_1[0x10] = uVar8;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[0xd] = uVar5;
  param_1[0xc] = uVar1;
  param_1[0xb] = uVar3;
  *param_2 = 0;
  return param_1;
}


