/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00522af0; name: FUN_00522af0
 */


ulong * FUN_00522af0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *__s;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 == param_1) {
    return param_1;
  }
  if ((*param_2 & 1) == 0) {
    FUN_00522c08(param_1,param_2 + 1,*param_2 >> 1);
    return param_1;
  }
  uVar2 = *param_1;
  if ((uVar2 & 1) == 0) {
    __s = param_1 + 1;
joined_r0x00522b50:
    if (uVar2 >> 1 != 0) {
      uVar3 = uVar2 >> 1;
      puVar1 = __s + uVar3 * 3;
      do {
        uVar3 = uVar3 - 1;
        FUN_0051f624(puVar1 + -3,puVar1[-2]);
        puVar1 = puVar1 + -3;
      } while (uVar3 != 0);
    }
    memset(__s,0xab,(uVar2 >> 1) * 0x18);
    if ((*param_1 & 1) == 0) goto LAB_00522ba8;
  }
  else {
    __s = (ulong *)param_1[1];
    if (__s != (ulong *)0x0) goto joined_r0x00522b50;
  }
  FUN_002e2ea0(PTR_LAB_04373088,param_1[1]);
LAB_00522ba8:
  if ((*param_2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("IsMemcpyOk::value || other_storage.GetIsAllocated()",
                  "external/com_google_absl\\absl/container/internal/inlined_vector.h",0x1b2,
                  "MemcpyFrom");
  }
  *param_1 = *param_2;
  uVar3 = param_2[2];
  uVar2 = param_2[1];
  uVar5 = param_2[4];
  uVar4 = param_2[3];
  uVar6 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  *param_2 = 0;
  return param_1;
}


