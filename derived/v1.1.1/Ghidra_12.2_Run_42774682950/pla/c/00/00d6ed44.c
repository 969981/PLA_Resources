/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d6ed44; name: FUN_00d6ed44
 */


undefined8 FUN_00d6ed44(long param_1,long *param_2,int param_3,char *param_4)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  bool bVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  void *__dest;
  uint *puVar13;
  long lVar14;
  ulong local_68;
  ulong local_60;
  void *local_58;
  
  piVar6 = *(int **)(param_1 + 0x88);
  uVar4 = ((ushort *)((long)piVar6 - (long)*piVar6))[2];
  uVar7 = (ulong)uVar4;
  if (*(ushort *)((long)piVar6 - (long)*piVar6) < 5) {
    puVar13 = (uint *)0x0;
  }
  else if (uVar4 == 0) {
    uVar7 = 0;
    puVar13 = (uint *)0x0;
  }
  else {
    puVar13 = (uint *)((long)((long)piVar6 + uVar7) + (ulong)*(uint *)((long)piVar6 + uVar7));
  }
  uVar11 = (ulong)*(uint *)((long)piVar6 + uVar7);
  puVar1 = (uint *)((long)((long)piVar6 + uVar7) + uVar11);
  uVar12 = (ulong)*puVar1;
  if (puVar13 != puVar1 + uVar12) {
    lVar14 = 0;
    iVar5 = 0;
    bVar9 = false;
    do {
      if (bVar9) {
LAB_00d6ee3c:
        if (iVar5 == param_3) {
          uVar7 = (ulong)*(uint *)((long)puVar13 + lVar14 + 4);
          lVar2 = uVar7 + *(ushort *)
                           ((long)puVar13 +
                           lVar14 + (uVar7 - (long)*(int *)((long)puVar13 + lVar14 + uVar7 + 4)) +
                           0x10);
          lVar2 = lVar14 + lVar2 + (ulong)*(uint *)((long)puVar13 + lVar14 + lVar2 + 4);
          uVar3 = *(uint *)((long)puVar13 + lVar2 + 4);
          uVar7 = (ulong)uVar3;
          local_68 = 0;
          local_60 = 0;
          local_58 = (void *)0x0;
          if (uVar3 < 0x17) {
            local_68 = (ulong)(byte)(uVar3 << 1);
            __dest = (void *)((ulong)&local_68 | 1);
            if (uVar3 == 0) goto LAB_00d6eec8;
          }
          else {
            uVar11 = uVar7 + 0x10 & 0x1fffffff0;
            __dest = operator_new(uVar11);
            local_68 = uVar11 | 1;
            local_60 = uVar7;
            local_58 = __dest;
          }
          memcpy(__dest,(void *)((long)puVar13 + lVar2 + 8),uVar7);
LAB_00d6eec8:
          uVar11 = local_60;
          *(undefined1 *)((long)__dest + uVar7) = 0;
          if ((local_68 & 1) == 0) {
            if ((byte)local_68 < 2) {
              return 0;
            }
          }
          else {
            operator_delete(local_58);
            if (uVar11 == 0) {
              return 0;
            }
          }
          uVar7 = (ulong)*(uint *)((long)puVar13 + lVar14 + 4);
          lVar2 = lVar14 + (uVar7 - (long)*(int *)((long)puVar13 + lVar14 + uVar7 + 4));
          if ((*(ushort *)((long)puVar13 + lVar2 + 4) < 0xd) ||
             (uVar11 = (ulong)*(ushort *)((long)puVar13 + lVar2 + 0x10), uVar11 == 0)) {
            lVar14 = 0;
          }
          else {
            lVar2 = uVar7 + uVar11;
            lVar14 = (long)puVar13 +
                     lVar14 + lVar2 + (ulong)*(uint *)((long)puVar13 + lVar14 + lVar2 + 4) + 4;
          }
          snprintf(param_4,0x60,"bin/appli/tips/bin/%s.bntx",(char *)(lVar14 + 4));
          return 1;
        }
        iVar5 = iVar5 + 1;
        bVar9 = true;
      }
      else {
        uVar8 = (ulong)*(uint *)((long)puVar13 + lVar14 + 4);
        lVar2 = lVar14 + (uVar8 - (long)*(int *)((long)puVar13 + lVar14 + uVar8 + 4));
        if ((*(ushort *)((long)puVar13 + lVar2 + 4) < 5) ||
           (uVar10 = (ulong)*(ushort *)((long)puVar13 + lVar2 + 8), uVar10 == 0)) {
          if (*param_2 == 0) goto LAB_00d6ee3c;
        }
        else if (*(long *)((long)puVar13 + lVar14 + uVar8 + uVar10 + 4) == *param_2)
        goto LAB_00d6ee3c;
        bVar9 = false;
      }
      lVar14 = lVar14 + 4;
    } while ((long)piVar6 + ((uVar7 + uVar12 * 4 + uVar11) - (long)puVar13) != lVar14);
  }
  return 0;
}


