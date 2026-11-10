/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a8eb50; name: FUN_02a8eb50
 */


void FUN_02a8eb50(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  size_t sVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  char *__s;
  
  switch(*(undefined4 *)(param_1 + 0x28)) {
  case 0:
    puVar8 = &DAT_cbf29ce484222645;
    sVar5 = strlen(s_data___0427f778);
    uVar10 = *(ulong *)(param_1 + 0x18);
    uVar2 = uVar10;
    if (sVar5 <= uVar10) {
      uVar2 = sVar5;
    }
    pbVar7 = (byte *)(*(long *)(param_1 + 0x10) + uVar2);
    uVar4 = uVar10 - uVar2;
    *(byte **)(param_1 + 0x10) = pbVar7;
    *(ulong *)(param_1 + 0x18) = uVar4;
    if (uVar4 != 0) {
      uVar9 = uVar4 & 1;
      if (uVar10 != uVar2 + 1) {
        lVar11 = uVar4 - uVar9;
        do {
          bVar3 = *pbVar7;
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 2;
          puVar8 = (undefined1 *)
                   ((((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3 ^ (ulong)*pbVar1) *
                   0x100000001b3);
          lVar11 = lVar11 + -2;
        } while (lVar11 != 0);
      }
LAB_02a8ecfc:
      if (uVar9 != 0) {
        puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)*pbVar7) * 0x100000001b3);
      }
    }
    break;
  default:
    goto switchD_02a8eb80_caseD_1;
  case 2:
    puVar8 = &DAT_cbf29ce484222645;
    sVar5 = strlen(&DAT_0427f787);
    uVar10 = *(ulong *)(param_1 + 0x18);
    uVar2 = uVar10;
    if (sVar5 <= uVar10) {
      uVar2 = sVar5;
    }
    pbVar7 = (byte *)(*(long *)(param_1 + 0x10) + uVar2);
    uVar4 = uVar10 - uVar2;
    *(byte **)(param_1 + 0x10) = pbVar7;
    *(ulong *)(param_1 + 0x18) = uVar4;
    if (uVar4 != 0) {
      uVar9 = uVar4 & 1;
      if (uVar10 != uVar2 + 1) {
        lVar11 = uVar4 - uVar9;
        do {
          bVar3 = *pbVar7;
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 2;
          puVar8 = (undefined1 *)
                   ((((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3 ^ (ulong)*pbVar1) *
                   0x100000001b3);
          lVar11 = lVar11 + -2;
        } while (lVar11 != 0);
      }
      goto LAB_02a8ecfc;
    }
    break;
  case 3:
    puVar8 = &DAT_cbf29ce484222645;
    sVar5 = strlen(s_save_d___0427f796);
    uVar10 = *(ulong *)(param_1 + 0x18);
    uVar2 = uVar10;
    if (sVar5 - 1 <= uVar10) {
      uVar2 = sVar5 - 1;
    }
    pbVar7 = (byte *)(*(long *)(param_1 + 0x10) + uVar2);
    uVar9 = uVar10 - uVar2;
    *(byte **)(param_1 + 0x10) = pbVar7;
    *(ulong *)(param_1 + 0x18) = uVar9;
    if (uVar9 != 0) {
      uVar9 = uVar9 & 1;
      if (uVar10 != uVar2 + 1) {
        lVar11 = (uVar2 + uVar9) - uVar10;
        do {
          bVar3 = *pbVar7;
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 2;
          puVar8 = (undefined1 *)
                   ((((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3 ^ (ulong)*pbVar1) *
                   0x100000001b3);
          lVar11 = lVar11 + 2;
        } while (lVar11 != 0);
      }
      goto LAB_02a8ecfc;
    }
    break;
  case 4:
    __s = *(char **)(param_1 + 0x10);
    pcVar6 = strchr(__s,0x2f);
    if (pcVar6 != (char *)0x0) {
      uVar10 = *(ulong *)(param_1 + 0x18);
      puVar8 = &DAT_cbf29ce484222645;
      uVar2 = uVar10;
      if ((ulong)((long)pcVar6 - (long)__s) <= uVar10) {
        uVar2 = (long)pcVar6 - (long)__s;
      }
      pbVar7 = (byte *)(__s + uVar2);
      uVar9 = uVar10 - uVar2;
      *(byte **)(param_1 + 0x10) = pbVar7;
      *(ulong *)(param_1 + 0x18) = uVar9;
      if (uVar9 != 0) {
        if (uVar10 != uVar2 + 1) {
          lVar11 = (uVar2 + (uVar9 & 1)) - uVar10;
          do {
            bVar3 = *pbVar7;
            pbVar1 = pbVar7 + 1;
            pbVar7 = pbVar7 + 2;
            puVar8 = (undefined1 *)
                     ((((ulong)puVar8 ^ (ulong)bVar3) * 0x100000001b3 ^ (ulong)*pbVar1) *
                     0x100000001b3);
            lVar11 = lVar11 + 2;
          } while (lVar11 != 0);
        }
        if ((uVar9 & 1) != 0) {
          puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)*pbVar7) * 0x100000001b3);
        }
      }
      *(undefined1 **)(param_1 + 8) = puVar8;
    }
    goto switchD_02a8eb80_caseD_1;
  }
  *(undefined1 **)(param_1 + 8) = puVar8;
switchD_02a8eb80_caseD_1:
  return;
}


