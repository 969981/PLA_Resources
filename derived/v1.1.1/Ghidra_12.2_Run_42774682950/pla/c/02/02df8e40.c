/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02df8e40; name: FUN_02df8e40
 */


int FUN_02df8e40(long param_1)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong __n;
  uint uVar8;
  
  iVar4 = *(int *)(param_1 + 0x68);
  do {
    if (iVar4 == 0) {
      bVar3 = *(byte *)(param_1 + 0x82);
      if ((bVar3 & 1) != 0) {
        return 0x11;
      }
      if ((bVar3 >> 1 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x90))();
      }
      else {
        *(byte *)(param_1 + 0x82) = bVar3 & 0xfd;
      }
      iVar4 = FUN_02f20cc4(param_1);
      if (iVar4 != 0x2d) {
        return iVar4;
      }
      if (*(int *)(param_1 + 0x6c) == *(int *)(param_1 + 0x78)) {
        *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xa8);
        *(undefined1 *)(param_1 + 0xb8) = 1;
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x84) / 400;
      }
    }
    uVar2 = *(uint *)(param_1 + 0xa4);
    piVar1 = (int *)(param_1 + 0xcc);
    if (*(int *)(param_1 + 0xb0) - 1U != uVar2) {
      piVar1 = (int *)(*(long *)(param_1 + 0xc0) + (ulong)(uVar2 + 1) * 4);
    }
    uVar5 = *(uint *)(param_1 + 0x68);
    uVar2 = *piVar1 - *(int *)(*(long *)(param_1 + 0xc0) + (ulong)uVar2 * 4) & 0xffff;
    if (uVar5 < uVar2) {
      if (*(char *)(param_1 + 0xe4) == '\0') {
        lVar7 = (*DAT_0442d138)(5,uVar2);
        *(long *)(param_1 + 0xd8) = lVar7;
        if (lVar7 == 0) {
          return 0x34;
        }
        uVar5 = *(uint *)(param_1 + 0x68);
        *(undefined1 *)(param_1 + 0xe4) = 1;
      }
      uVar6 = *(uint *)(param_1 + 0xe0);
      uVar8 = uVar5;
      if (uVar2 - uVar6 <= uVar5) {
        uVar8 = uVar2 - uVar6;
      }
LAB_02df8fe0:
      __n = (ulong)uVar8;
      memcpy((void *)(*(long *)(param_1 + 0xd8) + (ulong)uVar6),*(void **)(param_1 + 0x60),__n);
      uVar6 = *(uint *)(param_1 + 0xe0);
      lVar7 = *(long *)(param_1 + 0x60);
      uVar5 = *(uint *)(param_1 + 0x68);
    }
    else {
      uVar6 = *(uint *)(param_1 + 0xe0);
      uVar8 = uVar5;
      if (uVar2 - uVar6 <= uVar5) {
        uVar8 = uVar2 - uVar6;
      }
      if (*(char *)(param_1 + 0xe4) != '\0') goto LAB_02df8fe0;
      lVar7 = *(long *)(param_1 + 0x60);
      __n = (ulong)uVar8;
      *(long *)(param_1 + 0xd8) = lVar7;
    }
    *(ulong *)(param_1 + 0x60) = lVar7 + __n;
    iVar4 = uVar5 - uVar8;
    *(uint *)(param_1 + 0xe0) = uVar6 + uVar8;
    *(int *)(param_1 + 0x68) = iVar4;
    *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar8;
    if (uVar6 + uVar8 == uVar2) {
      *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + 1;
      return 0x2d;
    }
  } while( true );
}


