/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02936558; name: FUN_02936558
 */


undefined8 FUN_02936558(long param_1,char *param_2,long *param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  void *__src;
  long lVar7;
  size_t sVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  size_t sVar15;
  byte *pbVar16;
  int *__dest;
  ulong uVar17;
  int aiStack_180 [4];
  uint local_170;
  byte local_16c [268];
  
  uVar4 = *(uint *)(param_3 + 1);
  if (uVar4 == 0) {
    uVar4 = (**(code **)(*(long *)*param_3 + 0x30))();
    *(uint *)(param_3 + 1) = uVar4;
  }
  if (uVar4 << 1 < 9) {
    uVar11 = 8;
LAB_029365fc:
    uVar17 = (ulong)uVar11;
    __dest = (int *)((long)aiStack_180 - (uVar17 + 0xf & 0x1fffffff0));
    if (uVar4 == 0) {
      uVar4 = (**(code **)(*(long *)*param_3 + 0x30))();
      *(uint *)(param_3 + 1) = uVar4;
    }
  }
  else {
    if (uVar4 == 0) {
      uVar4 = (**(code **)(*(long *)*param_3 + 0x30))();
      uVar11 = uVar4 << 1;
      *(uint *)(param_3 + 1) = uVar4;
      goto LAB_029365fc;
    }
    uVar17 = (ulong)(uVar4 << 1);
    __dest = (int *)((long)aiStack_180 - (uVar17 + 0xf & 0x1fffffff0));
  }
  uVar11 = 0;
  if (uVar4 != 0) {
    uVar11 = 8 / uVar4;
  }
  if (uVar11 * uVar4 == 8) {
    uVar4 = 8;
  }
  else {
    if (uVar4 == 0) {
      uVar4 = (**(code **)(*(long *)*param_3 + 0x30))();
      *(uint *)(param_3 + 1) = uVar4;
      if (uVar4 == 0) {
        uVar4 = (**(code **)(*(long *)*param_3 + 0x30))();
        uVar12 = (ulong)uVar4;
        uVar2 = 0;
        if (uVar12 != 0) {
          uVar2 = (ulong)__dest / uVar12;
        }
        *(uint *)(param_3 + 1) = uVar4;
        __dest = (int *)(uVar2 * uVar12);
        if (uVar4 == 0) {
          uVar4 = (**(code **)(*(long *)*param_3 + 0x30))();
          *(uint *)(param_3 + 1) = uVar4;
        }
        goto LAB_02936680;
      }
    }
    uVar12 = (ulong)uVar4;
    uVar2 = 0;
    if (uVar12 != 0) {
      uVar2 = (ulong)__dest / uVar12;
    }
    __dest = (int *)(uVar12 + uVar2 * uVar12);
  }
LAB_02936680:
  __src = (void *)(*DAT_0442d138)(7,uVar17);
  iVar5 = (**(code **)(*(long *)*param_3 + 0x38))(0,(long *)*param_3,__src,uVar4,1,0x32,&local_170);
  if ((iVar5 != 1) || (local_170 < 8)) {
    if ((long *)*param_3 != (long *)0x0) {
      (**(code **)(*(long *)*param_3 + 0x10))();
    }
    *param_3 = 0;
    (*DAT_0442d150)(7,__src);
    return 2;
  }
  memcpy(__dest,__src,(ulong)local_170);
  (*DAT_0442d150)(7,__src);
  if ((*__dest != 0x4b504b41) || (iVar5 = __dest[1], iVar5 == 0)) {
LAB_02936938:
    if ((long *)*param_3 != (long *)0x0) {
      (**(code **)(*(long *)*param_3 + 0x10))();
    }
    *param_3 = 0;
    return 2;
  }
  uVar4 = *(uint *)(param_3 + 1);
  if (uVar4 == 0) {
    uVar4 = (**(code **)(*(long *)*param_3 + 0x30))();
    *(uint *)(param_3 + 1) = uVar4;
  }
  uVar11 = 0;
  if (uVar4 != 0) {
    uVar11 = (iVar5 + uVar4 + 7) / uVar4;
  }
  uVar11 = uVar11 * uVar4;
  lVar7 = (*DAT_0442d140)(0xf,uVar11 + 0x78);
  if (lVar7 == 0) {
    *param_4 = 0;
    goto LAB_02936938;
  }
  if (param_2 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    aiStack_180[3] = uVar11;
    sVar8 = strlen(param_2);
    uVar17 = sVar8 + 1;
    if (0x102 < uVar17) {
      uVar17 = 0x103;
    }
    strncpy((char *)local_16c,param_2,uVar17);
    local_16c[uVar17] = 0;
    sVar8 = strlen(param_2);
    if (sVar8 != 0) {
      pbVar13 = local_16c;
      sVar15 = sVar8;
      do {
        if (*pbVar13 - 0x41 < 0x1a) {
          *pbVar13 = *pbVar13 + 0x20;
        }
        sVar15 = sVar15 - 1;
        pbVar13 = pbVar13 + 1;
      } while (sVar15 != 0);
    }
    uVar4 = 0x811c9dc5;
    uVar11 = aiStack_180[3];
    if ((int)sVar8 != 0) {
      pbVar13 = local_16c;
      do {
        pbVar16 = pbVar13 + 1;
        uVar4 = uVar4 * 0x1000193 ^ (uint)*pbVar13;
        pbVar13 = pbVar16;
      } while (pbVar16 < local_16c + (sVar8 & 0xffffffff));
    }
  }
  puVar10 = (undefined8 *)(lVar7 + (ulong)uVar11);
  *(uint *)(puVar10 + 8) = uVar4;
  *(int *)((long)puVar10 + 0x44) = iVar5 + 8;
  *puVar10 = &PTR_LAB_04275e90;
  puVar10[1] = 0;
  puVar10[2] = &PTR_LAB_04276130;
  *(undefined2 *)(puVar10 + 3) = 0;
  puVar10[9] = lVar7;
  *(undefined4 *)(puVar10 + 10) = 1;
  puVar10[0xb] = 0;
  *(undefined4 *)(puVar10 + 0xc) = 0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[6] = 0;
  puVar10[7] = 0;
  lVar14 = *param_3;
  *(int *)(puVar10 + 0xc) = (int)param_3[1];
  puVar10[0xb] = lVar14;
  lVar14 = (**(code **)(*(long *)*param_3 + 0x20))();
  puVar10[0xd] = *(undefined8 *)(lVar14 + 0x18);
  puVar10[0xe] = *(undefined8 *)(lVar14 + 0x10);
  *param_4 = (long)puVar10;
  uVar4 = __dest[1];
  uVar11 = local_170 - 8;
  if (local_170 < 8 || uVar11 == 0) {
    uVar17 = 8;
    if (uVar4 != 0) goto LAB_029369e4;
LAB_02936a20:
    plVar9 = (long *)*param_4;
    if (((ulong)(__dest[1] + 8) <
         (ulong)*(uint *)(lVar7 + 0xc) + (ulong)*(uint *)(lVar7 + 0x10) +
         (ulong)*(uint *)(lVar7 + 0x14) + (ulong)*(uint *)(lVar7 + 0x18) + 0x1c) ||
       (*(int *)(lVar7 + 8) == 0)) goto LAB_02936aec;
    plVar9[4] = lVar7 + 0x1c;
    lVar14 = lVar7 + 0x1c + (ulong)*(uint *)(lVar7 + 0xc);
    plVar9[5] = lVar14;
    lVar14 = lVar14 + (ulong)*(uint *)(lVar7 + 0x10);
    plVar9[6] = lVar14;
    plVar9[7] = lVar14 + (ulong)*(uint *)(lVar7 + 0x14);
    if (*(char *)(param_1 + 0x58) != '\0') {
LAB_02936aac:
      lVar7 = *param_4;
      *(undefined2 *)(lVar7 + 0x18) = 0;
      if (*(long *)(lVar7 + 0x20) != 0) {
        sVar3 = FUN_029381d4(*(long *)(lVar7 + 0x20),&DAT_0440a0c8);
        if ((sVar3 == 0) && (1 < **(uint **)(lVar7 + 0x20))) {
          return 0x16;
        }
        *(short *)(lVar7 + 0x18) = sVar3;
      }
      return 1;
    }
    puVar10 = (undefined8 *)FUN_02e67088(&DAT_0440a0b8);
    if (puVar10 != (undefined8 *)0x0) {
      *puVar10 = &LAB_02936b28;
      puVar10[1] = param_1;
      *(undefined1 *)(param_1 + 0x58) = 1;
      goto LAB_02936aac;
    }
  }
  else {
    memcpy((void *)(lVar7 + 8),__dest + 2,(ulong)uVar11);
    uVar6 = *(uint *)(param_3 + 1);
    uVar1 = uVar4;
    if (uVar11 <= uVar4) {
      uVar1 = uVar11;
    }
    if (uVar6 == 0) {
      uVar6 = (**(code **)(*(long *)*param_3 + 0x30))();
      uVar4 = ((uVar4 - uVar1) + uVar6) - 1;
      *(uint *)(param_3 + 1) = uVar6;
      if (uVar6 == 0) {
        uVar6 = (**(code **)(*(long *)*param_3 + 0x30))();
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar4 / uVar6;
        }
        *(uint *)(param_3 + 1) = uVar6;
        if (uVar6 == 0) {
          uVar6 = (**(code **)(*(long *)*param_3 + 0x30))();
          *(uint *)(param_3 + 1) = uVar6;
        }
      }
      else {
        uVar11 = 0;
        if (uVar6 != 0) {
          uVar11 = uVar4 / uVar6;
        }
      }
    }
    else {
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = (((uVar4 - uVar1) + uVar6) - 1) / uVar6;
      }
    }
    uVar4 = uVar6 * uVar11;
    uVar17 = (ulong)(uVar1 + 8);
    if (uVar4 == 0) goto LAB_02936a20;
LAB_029369e4:
    iVar5 = (**(code **)(*(long *)*param_3 + 0x38))
                      (0,(long *)*param_3,lVar7 + uVar17,uVar4,1,0x32,&local_170);
    if ((iVar5 == 1) && (uVar4 <= local_170)) goto LAB_02936a20;
  }
  plVar9 = (long *)*param_4;
LAB_02936aec:
  iVar5 = (int)plVar9[10] + -1;
  *(int *)(plVar9 + 10) = iVar5;
  if (iVar5 == 0) {
    (**(code **)(*plVar9 + 0x10))();
    return 2;
  }
  return 2;
}


