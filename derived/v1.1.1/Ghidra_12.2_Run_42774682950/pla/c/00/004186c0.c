/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004186c0; name: FUN_004186c0
 */


bool FUN_004186c0(long param_1,long param_2,ulong param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  time_t tVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long local_28;
  
  local_28 = 0;
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar5 = 0x73;
    uVar6 = 0x1a3;
LAB_00418750:
    FUN_004014b0(0x24,0x6e,uVar5,"external/openssl/crypto/rand/drbg_lib.c",uVar6);
    return false;
  }
  if (*(int *)(param_1 + 0x98) == 2) {
    uVar5 = 0x72;
    uVar6 = 0x19f;
    goto LAB_00418750;
  }
  if (param_2 == 0) {
    param_3 = 0;
  }
  else if (*(ulong *)(param_1 + 0x68) < param_3) {
    uVar5 = 0x66;
    uVar6 = 0x1aa;
    goto LAB_00418750;
  }
  *(undefined4 *)(param_1 + 0x98) = 2;
  iVar2 = *(int *)(param_1 + 0x88);
  if ((iVar2 != 0) && (bVar1 = iVar2 == -1, iVar2 = iVar2 + 1, bVar1)) {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0x8c) = iVar2;
  if (*(code **)(param_1 + 0x148) == (code *)0x0) {
    uVar3 = 0;
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_004187b4;
  }
  else {
    uVar3 = (**(code **)(param_1 + 0x148))
                      (param_1,&local_28,*(undefined4 *)(param_1 + 0x30),
                       *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_4);
    if (*(ulong *)(param_1 + 0x40) <= uVar3) {
LAB_004187b4:
      if (uVar3 <= *(ulong *)(param_1 + 0x48)) {
        iVar2 = (**(code **)(*(long *)(param_1 + 0x140) + 8))
                          (param_1,local_28,uVar3,param_2,param_3);
        if (iVar2 != 0) {
          *(undefined4 *)(param_1 + 0x98) = 1;
          *(undefined4 *)(param_1 + 0x70) = 1;
          tVar4 = time((time_t *)0x0);
          *(time_t *)(param_1 + 0x78) = tVar4;
          *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x8c);
        }
        goto joined_r0x00418840;
      }
    }
  }
  FUN_004014b0(0x24,0x6e,0x6e,"external/openssl/crypto/rand/drbg_lib.c",0x1be);
joined_r0x00418840:
  if ((local_28 != 0) && (*(code **)(param_1 + 0x150) != (code *)0x0)) {
    (**(code **)(param_1 + 0x150))(param_1,local_28,uVar3);
  }
  return *(int *)(param_1 + 0x98) == 1;
}


