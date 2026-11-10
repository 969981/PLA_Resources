/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c4ec4; name: FUN_003c4ec4
 */


bool FUN_003c4ec4(byte *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte *__s1;
  byte *__s2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *__s2_00;
  byte *__s1_00;
  
  bVar3 = *param_2;
  bVar4 = *param_1;
  uVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  uVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(param_1 + 8);
  }
  __n = uVar1;
  if (uVar2 <= uVar1) {
    __n = uVar2;
  }
  if (__n == 0) {
LAB_003c4f40:
    if (uVar2 < uVar1) {
      return true;
    }
    if (__n != 0) {
      __s1_00 = *(byte **)(param_2 + 0x10);
      __s2_00 = *(byte **)(param_1 + 0x10);
      goto LAB_003c4f5c;
    }
  }
  else {
    __s2_00 = *(byte **)(param_1 + 0x10);
    __s1 = __s2_00;
    if ((bVar4 & 1) == 0) {
      __s1 = param_1 + 1;
    }
    __s1_00 = *(byte **)(param_2 + 0x10);
    __s2 = __s1_00;
    if ((bVar3 & 1) == 0) {
      __s2 = param_2 + 1;
    }
    iVar5 = memcmp(__s1,__s2,__n);
    if (iVar5 == 0) goto LAB_003c4f40;
    if (iVar5 < 0) {
      return true;
    }
LAB_003c4f5c:
    if ((bVar3 & 1) == 0) {
      __s1_00 = param_2 + 1;
    }
    if ((bVar4 & 1) == 0) {
      __s2_00 = param_1 + 1;
    }
    iVar5 = memcmp(__s1_00,__s2_00,__n);
    if (iVar5 != 0) {
      if (iVar5 < 0) {
        return false;
      }
      goto LAB_003c4f7c;
    }
  }
  if (uVar1 < uVar2) {
    return false;
  }
LAB_003c4f7c:
  return *(int *)(param_1 + 0x18) < *(int *)(param_2 + 0x18);
}


