/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085f380; name: FUN_0085f380
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085f380(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0xc0);
  if (*(uint *)(param_1 + 0xc0) != 0) {
    lVar3 = *(long *)(param_1 + 0xb8);
    do {
      if (*(long *)(lVar3 + 0x10) == param_2) {
        if (lVar3 != 0) {
          *(undefined1 *)(lVar3 + 0x69) = 1;
          return;
        }
        break;
      }
      lVar3 = lVar3 + 0x78;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(undefined1 *)(param_1 + 0x5a) = 1;
  uVar2 = FUN_0085f490(param_1,param_2);
  if ((uVar2 & 1) != 0) {
    uVar2 = (ulong)*(uint *)(param_1 + 0xc0);
    if (*(uint *)(param_1 + 0xc0) == 0) {
      DAT_00000069 = 1;
      lVar3 = 0;
      iVar1 = _DAT_00000020;
    }
    else {
      lVar3 = *(long *)(param_1 + 0xb8);
      uVar4 = 0xffffffffffffffff;
      plVar5 = (long *)(lVar3 + 0x10);
      do {
        lVar6 = *plVar5;
        uVar4 = uVar4 + 1;
        plVar5 = plVar5 + 0xf;
      } while (lVar6 != param_2);
      *(undefined1 *)(lVar3 + (uVar4 & 0xffffffff) * 0x78 + 0x69) = 1;
      do {
        if (*(long *)(lVar3 + 0x10) == param_2) goto LAB_0085f43c;
        lVar3 = lVar3 + 0x78;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      lVar3 = 0;
LAB_0085f43c:
      iVar1 = *(int *)(lVar3 + 0x20);
    }
    if ((iVar1 < 1) && (*(undefined4 *)(lVar3 + 0x74) = 0, iVar1 == 0)) {
      *(undefined4 *)(lVar3 + 0x20) = 1;
      *(undefined1 *)(param_1 + 0xa8) = 1;
      return;
    }
  }
  return;
}


