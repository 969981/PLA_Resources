/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082f6bc; name: FUN_0082f6bc
 */


void FUN_0082f6bc(ushort *param_1)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  long *plVar5;
  uint uVar6;
  ushort *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  FUN_0083072c();
  memset(param_1 + 0x48,0,4);
  uVar3 = *param_1;
  if (uVar3 != 0) {
    uVar4 = param_1[3];
    uVar6 = 0;
    if ((byte)uVar4 != 0) goto LAB_0082f708;
LAB_0082f6f4:
    uVar6 = uVar6 + 1;
    if (uVar3 != uVar6) {
      while ((byte)uVar4 != uVar6) {
LAB_0082f708:
        puVar7 = *(ushort **)(param_1 + 8);
        uVar1 = uVar6 & 0xff;
        lVar10 = 0;
        if ((uVar1 != 0xff) && (uVar1 < *puVar7)) {
          lVar10 = *(long *)(puVar7 + 4) + (ulong)uVar1 * 0x20;
        }
        if ((((*(long *)(lVar10 + 0x10) == 0) || (*(char *)(lVar10 + 0x1c) == -1)) ||
            (lVar10 = *(long *)(*(long *)(puVar7 + 4) + (ulong)uVar1 * 0x20 + 0x10),
            *(char *)(lVar10 + 0x90) == -3)) || (*(char *)(lVar10 + 0x91) == -3)) break;
        bVar2 = *(byte *)(lVar10 + 0x28);
        if (bVar2 == 0xfd) break;
        uVar8 = (ulong)(bVar2 >> 3) & 0x1c;
        *(uint *)((long)param_1 + uVar8 + 0x90) =
             *(uint *)((long)param_1 + uVar8 + 0x90) | 1 << (ulong)(bVar2 & 0x1f);
        uVar6 = uVar6 + 1;
        if (uVar3 == uVar6) goto LAB_0082f79c;
      }
      goto LAB_0082f6f4;
    }
  }
LAB_0082f79c:
  memset(param_1 + 0x4a,0,4);
  if ((*(char *)((long)param_1 + 7) != -3) && ((char)param_1[4] != -3)) {
    uVar3 = *param_1;
    if (uVar3 != 0) {
      uVar4 = param_1[3];
      uVar6 = 0;
      if ((byte)uVar4 != 0) goto LAB_0082f7f4;
LAB_0082f7e0:
      uVar6 = uVar6 + 1;
      if (uVar3 != uVar6) {
        while ((byte)uVar4 != uVar6) {
LAB_0082f7f4:
          lVar10 = *(long *)(*(long *)(param_1 + 8) + 8) + (ulong)(uVar6 & 0xff) * 0x20;
          lVar9 = *(long *)(lVar10 + 0x10);
          if (((lVar9 == 0) || (*(char *)(lVar10 + 0x1c) == -1)) ||
             ((*(char *)(lVar9 + 0x90) == -3 || (*(char *)(lVar9 + 0x91) == -3)))) break;
          bVar2 = *(byte *)(lVar9 + 0x28);
          if (bVar2 == 0xfd) break;
          uVar8 = (ulong)(bVar2 >> 3) & 0x1c;
          *(uint *)((long)param_1 + uVar8 + 0x94) =
               *(uint *)((long)param_1 + uVar8 + 0x94) | 1 << (ulong)(bVar2 & 0x1f);
          uVar6 = uVar6 + 1;
          if (uVar3 == uVar6) goto LAB_0082f864;
        }
        goto LAB_0082f7e0;
      }
    }
  }
LAB_0082f864:
  plVar5 = *(long **)(param_1 + 0x44);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0082f87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x10))(plVar5,(long)param_1 + 7);
  return;
}


