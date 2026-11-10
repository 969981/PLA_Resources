/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00418a90; name: FUN_00418a90
 */


undefined8
FUN_00418a90(long param_1,undefined8 param_2,ulong param_3,int param_4,undefined8 param_5,
            ulong param_6)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  time_t tVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (*(int *)(param_1 + 0x98) != 1) {
    FUN_00418880(param_1,0,0,0);
    if (*(int *)(param_1 + 0x98) == 0) {
      uVar5 = 0x73;
      uVar6 = 0x250;
      goto LAB_00418c9c;
    }
    if (*(int *)(param_1 + 0x98) == 2) {
      uVar5 = 0x72;
      uVar6 = 0x24c;
      goto LAB_00418c9c;
    }
  }
  if (*(ulong *)(param_1 + 0x38) < param_3) {
    uVar5 = 0x75;
    uVar6 = 0x256;
  }
  else if (*(ulong *)(param_1 + 0x68) < param_6) {
    uVar5 = 0x66;
    uVar6 = 0x25a;
  }
  else {
    bVar2 = *(int *)(param_1 + 0x18) != *(int *)PTR_DAT_043741c0;
    if (bVar2) {
      *(int *)(param_1 + 0x18) = *(int *)PTR_DAT_043741c0;
      uVar1 = *(uint *)(param_1 + 0x74);
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x74);
    }
    if ((uVar1 != 0) && (uVar1 <= *(uint *)(param_1 + 0x70))) {
      bVar2 = true;
    }
    if (0 < *(long *)(param_1 + 0x80)) {
      tVar4 = time((time_t *)0x0);
      if ((tVar4 < *(long *)(param_1 + 0x78)) ||
         (*(long *)(param_1 + 0x80) <= tVar4 - *(long *)(param_1 + 0x78))) {
        bVar2 = true;
      }
    }
    if (((*(long *)(param_1 + 8) != 0) && (*(int *)(param_1 + 0x88) != 0)) &&
       (*(int *)(*(long *)(param_1 + 8) + 0x88) != *(int *)(param_1 + 0x88))) {
      bVar2 = true;
    }
    if (bVar2 || param_4 != 0) {
      iVar3 = FUN_004186c0(param_1,param_5,param_6,param_4);
      if (iVar3 == 0) {
        uVar5 = 0x76;
        uVar6 = 0x277;
        goto LAB_00418c9c;
      }
      param_6 = 0;
      param_5 = 0;
    }
    iVar3 = (**(code **)(*(long *)(param_1 + 0x140) + 0x10))
                      (param_1,param_2,param_3,param_5,param_6);
    if (iVar3 != 0) {
      *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
      return 1;
    }
    *(undefined4 *)(param_1 + 0x98) = 2;
    uVar6 = 0x280;
    uVar5 = 0x70;
  }
LAB_00418c9c:
  FUN_004014b0(0x24,0x6b,uVar5,"external/openssl/crypto/rand/drbg_lib.c",uVar6);
  return 0;
}


