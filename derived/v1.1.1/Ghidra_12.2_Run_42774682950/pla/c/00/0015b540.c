/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015b540; name: FUN_0015b540
 */


/* WARNING: Removing unreachable block (ram,0x0015b628) */
/* WARNING: Removing unreachable block (ram,0x0015b638) */
/* WARNING: Removing unreachable block (ram,0x0015b648) */
/* WARNING: Removing unreachable block (ram,0x0015b654) */
/* WARNING: Removing unreachable block (ram,0x0015b668) */
/* WARNING: Removing unreachable block (ram,0x0015b66c) */

void FUN_0015b540(long param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  
  uVar5 = (ulong)*param_2;
  lVar4 = *(long *)(param_1 + 0x10) + uVar5 * -0x10;
  if (*(char *)(param_1 + 0xc) == '\0') {
    iVar3 = FUN_0015abc0(param_1,lVar4 + -0x10,0xffffffff);
    if (iVar3 == 0) {
      FUN_001766f0(param_1);
      return;
    }
    return;
  }
  plVar6 = *(long **)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0xc) = 0;
  *plVar6 = *(long *)(param_1 + 0x38) + plVar6[7];
  if ((*(byte *)((long)plVar6 + 0x42) >> 1 & 1) == 0) {
    if ((code *)plVar6[4] != (code *)0x0) {
      uVar2 = (*(code *)plVar6[4])(param_1,1,plVar6[6]);
      lVar4 = *(long *)(param_1 + 0x10) + (long)(int)uVar2 * -0x10;
      uVar5 = (ulong)uVar2;
    }
    FUN_0015a930(param_1,plVar6,lVar4,uVar5);
  }
  else {
    FUN_001766f0(param_1);
  }
  lVar4 = *(long *)(param_1 + 0x20);
  do {
    if (lVar4 == param_1 + 0x60) {
      return;
    }
    while (uVar1 = *(ushort *)(lVar4 + 0x42), (uVar1 >> 1 & 1) == 0) {
      if ((uVar1 >> 4 & 1) != 0) {
        *(ushort *)(lVar4 + 0x42) = uVar1 & 0xffef;
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar4 + 0x28);
      }
      if (*(short *)(lVar4 + 0x40) == -1) {
        if (*(ulong *)(*(long *)(param_1 + 0x20) + 8) < *(ulong *)(param_1 + 0x10)) {
          *(ulong *)(*(long *)(param_1 + 0x20) + 8) = *(ulong *)(param_1 + 0x10);
        }
      }
      iVar3 = (**(code **)(lVar4 + 0x20))(param_1,1,*(undefined8 *)(lVar4 + 0x30));
      FUN_0015a930(param_1,lVar4,*(long *)(param_1 + 0x10) + (long)iVar3 * -0x10,iVar3);
      lVar4 = *(long *)(param_1 + 0x20);
      if (lVar4 == param_1 + 0x60) {
        return;
      }
    }
    FUN_00176560(param_1);
    FUN_001766f0(param_1);
    lVar4 = *(long *)(param_1 + 0x20);
  } while( true );
}


