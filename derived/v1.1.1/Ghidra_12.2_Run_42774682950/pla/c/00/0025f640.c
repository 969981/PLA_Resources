/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025f640; name: FUN_0025f640
 */


long * FUN_0025f640(long param_1,undefined1 *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ushort *puVar5;
  long *plVar6;
  
  switch(*param_2) {
  case 0:
    lVar4 = *(long *)(param_1 + 0x88);
    plVar6 = *(long **)(lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = plVar6 + 7;
    puVar2 = PTR_DAT_04372e08;
    if (plVar6 != (long *)0x0) {
      plVar6[3] = lVar4;
      plVar6[4] = (long)param_2;
      *(undefined1 *)((long)plVar6 + 0x14) = 0;
      *plVar6 = (long)(puVar2 + 0x10);
      plVar6[1] = 0x3f80000000000000;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar6[5] = 0;
      *(undefined4 *)(plVar6 + 6) = 0x3dcccccd;
      uVar3 = (ulong)*(uint *)(param_2 + 0x18);
      if (*(uint *)(param_2 + 0x18) != 0) {
        puVar5 = (ushort *)(*(long *)(param_2 + 0x20) + 0x30);
        do {
          if (((((1 < puVar5[-0x18]) || (1 < puVar5[-0x10])) || (1 < puVar5[-8])) ||
              ((1 < *puVar5 || (1 < puVar5[8])))) || (1 < puVar5[0x10])) {
            *(undefined1 *)((long)plVar6 + 0x14) = 1;
            break;
          }
          uVar3 = uVar3 - 1;
          puVar5 = puVar5 + 0x30;
        } while (uVar3 != 0);
      }
    }
    *(undefined4 *)(plVar6 + 6) = *(undefined4 *)(param_1 + 200);
    if (plVar6 == (long *)0x0) {
      return (long *)0x0;
    }
    goto LAB_0025f7f8;
  case 1:
    lVar4 = *(long *)(param_1 + 0x88);
    plVar6 = *(long **)(lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = plVar6 + 7;
    puVar2 = PTR_DAT_04372e18;
    if (plVar6 != (long *)0x0) {
      plVar6[3] = lVar4;
      plVar6[4] = (long)param_2;
      *(undefined1 *)((long)plVar6 + 0x14) = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar6[5] = 0;
      plVar6[6] = 0x3f8000003f800000;
      *plVar6 = (long)(puVar2 + 0x10);
      plVar6[1] = 0x3f80000000000000;
      if (*(ushort *)(param_2 + 0x38) < 2) {
        uVar1 = *(ushort *)(param_2 + 0x48);
joined_r0x0025f7e8:
        if (uVar1 < 2) break;
      }
LAB_0025f7ec:
      *(undefined1 *)((long)plVar6 + 0x14) = 1;
    }
    break;
  case 2:
    lVar4 = *(long *)(param_1 + 0x88);
    plVar6 = *(long **)(lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = plVar6 + 8;
    puVar2 = PTR_DAT_04372e20;
    if (plVar6 != (long *)0x0) {
      plVar6[3] = lVar4;
      plVar6[4] = (long)param_2;
      *(undefined1 *)((long)plVar6 + 0x14) = 0;
      *(undefined4 *)(plVar6 + 2) = 0;
      plVar6[5] = 0;
      plVar6[6] = 0x3f8000003f800000;
      *(undefined4 *)(plVar6 + 7) = 0;
      *plVar6 = (long)(puVar2 + 0x10);
      plVar6[1] = 0x3f80000000000000;
      if ((*(ushort *)(param_2 + 0x38) < 2) && (*(ushort *)(param_2 + 0x48) < 2)) {
        uVar1 = *(ushort *)(param_2 + 0x58);
        goto joined_r0x0025f7e8;
      }
      goto LAB_0025f7ec;
    }
    break;
  case 3:
    lVar4 = *(long *)(param_1 + 0x88);
    plVar6 = *(long **)(lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = plVar6 + 8;
    puVar2 = PTR_DAT_04372e28;
    if (plVar6 != (long *)0x0) {
      plVar6[3] = lVar4;
      plVar6[4] = (long)param_2;
      *(undefined1 *)((long)plVar6 + 0x14) = 0;
      plVar6[5] = 0;
      plVar6[6] = 0x3dcccccd00000000;
      *(undefined4 *)(plVar6 + 2) = 0;
      *plVar6 = (long)(puVar2 + 0x10);
      plVar6[1] = 0x3f80000000000000;
      if ((((1 < *(ushort *)(param_2 + 0x50)) || (1 < *(ushort *)(param_2 + 0x60))) ||
          (1 < *(ushort *)(param_2 + 0x70))) ||
         ((1 < *(ushort *)(param_2 + 0x80) || (1 < *(ushort *)(param_2 + 0x90))))) {
        *(undefined1 *)((long)plVar6 + 0x14) = 1;
      }
    }
    *(undefined4 *)((long)plVar6 + 0x34) = *(undefined4 *)(param_1 + 200);
    break;
  default:
    return (long *)0x0;
  }
  if (plVar6 != (long *)0x0) {
LAB_0025f7f8:
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  return plVar6;
}


