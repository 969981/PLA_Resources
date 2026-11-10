/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f28618; name: FUN_02f28618
 */


undefined8 FUN_02f28618(long param_1,undefined8 param_2,int param_3,ushort param_4,long *param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  MutexType *pMVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  bool bVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  void *__s;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long *plVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  size_t __n;
  float fVar21;
  undefined8 *local_90;
  undefined4 local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_58 [4];
  undefined1 auStack_54 [4];
  
  *(undefined8 *)(param_1 + 0x60) = param_2;
  lVar11 = param_5[1];
  *(long *)(param_1 + 0x68) = *param_5;
  *(long *)(param_1 + 0x70) = lVar11;
  *(byte *)(param_1 + 0x33c) = *(byte *)(param_1 + 0x33c) & 0xfc | *param_5 == 0;
  if (*param_5 != 0) {
    lVar11 = param_5[1];
    if ((lVar11 != -1) && (uVar19 = *(uint *)(DAT_0440a140 + 0x38), uVar19 != 0)) {
      uVar6 = 0;
      if (uVar19 != 0) {
        uVar6 = (uint)lVar11 / uVar19;
      }
      for (plVar14 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                               (ulong)((uint)lVar11 - uVar6 * uVar19) * 8); plVar14 != (long *)0x0;
          plVar14 = (long *)*plVar14) {
        if (plVar14[1] == lVar11) {
          *(int *)(plVar14[2] + 0x50) = *(int *)(plVar14[2] + 0x50) + 1;
          puVar20 = (undefined8 *)plVar14[2];
          if (puVar20 == (undefined8 *)0x0) {
            return 2;
          }
          puVar8 = (undefined8 *)(*DAT_0442d138)(5,0x1a0);
          if (puVar8 != (undefined8 *)0x0) {
            FUN_02e9b9cc(puVar8,puVar20,*param_5,0);
            puVar8[9] = 0;
            *puVar8 = &PTR_LAB_042abea8;
            puVar8[0x32] = 0;
            puVar8[0x33] = 0;
          }
          *(undefined8 **)(param_1 + 8) = puVar8;
          iVar4 = *(int *)(puVar20 + 10);
          *(int *)(puVar20 + 10) = iVar4 + -1;
          if (iVar4 + -1 == 0) {
            (**(code **)*puVar20)(puVar20);
            (*DAT_0442d150)(4,puVar20);
            lVar11 = *(long *)(param_1 + 8);
            puVar20 = DAT_0440a188;
          }
          else {
            lVar11 = *(long *)(param_1 + 8);
            puVar20 = DAT_0440a188;
          }
          if (lVar11 == 0) {
            DAT_0440a188 = puVar20;
            return 0x34;
          }
          iVar4 = *(int *)(*(long *)(lVar11 + 0x168) + 0x10);
          DAT_0440a188 = puVar20;
          nn::os::LockMutex((MutexType *)(puVar20 + 4));
          piVar15 = (int *)*puVar20;
          uVar19 = *(uint *)(puVar20 + 1);
          if ((uVar19 == 0) || (*piVar15 == iVar4)) {
            piVar17 = piVar15;
            goto LAB_02f2876c;
          }
          lVar11 = (ulong)uVar19 * 0x10;
          piVar16 = piVar15;
          goto LAB_02f28b28;
        }
      }
    }
    return 2;
  }
  goto LAB_02f28890;
  while (piVar17 = piVar16 + 4, piVar1 = piVar16 + 4, piVar16 = piVar17, *piVar1 != iVar4) {
LAB_02f28b28:
    lVar11 = lVar11 + -0x10;
    if (lVar11 == 0) {
      piVar17 = piVar15 + (ulong)uVar19 * 4;
      break;
    }
  }
LAB_02f2876c:
  nn::os::UnlockMutex((MutexType *)(puVar20 + 4));
  *(byte *)(param_1 + 0xa0) =
       *(byte *)(param_1 + 0xa0) & 0xfd | (piVar17 != piVar15 + (ulong)uVar19 * 4) << 1;
  puVar20 = DAT_0440a188;
  pMVar3 = (MutexType *)(DAT_0440a188 + 4);
  iVar4 = *(int *)(*(long *)(*(long *)(param_1 + 8) + 0x168) + 0x10);
  nn::os::LockMutex(pMVar3);
  piVar15 = (int *)puVar20[2];
  uVar19 = *(uint *)(puVar20 + 3);
  if ((uVar19 == 0) || (*piVar15 == iVar4)) {
    piVar16 = piVar15;
  }
  else {
    lVar11 = (ulong)uVar19 * 0x18;
    piVar17 = piVar15;
    do {
      lVar11 = lVar11 + -0x18;
      if (lVar11 == 0) goto LAB_02f287c8;
      piVar16 = piVar17 + 6;
      piVar1 = piVar17 + 6;
      piVar17 = piVar16;
    } while (*piVar1 != iVar4);
  }
  if (piVar16 == piVar15 + (ulong)uVar19 * 6) {
LAB_02f287c8:
    uVar19 = 0;
  }
  else {
    uVar19 = piVar16[4];
  }
  nn::os::UnlockMutex(pMVar3);
  *(byte *)(param_1 + 0xa0) = (byte)((uVar19 & 0x1f) << 2) | *(byte *)(param_1 + 0xa0) & 0x83;
  *(long *)(*(long *)(param_1 + 8) + 400) = param_1;
  local_58[0] = 0;
  uVar9 = FUN_02e9c220(0xbf800000,*(undefined8 *)(param_1 + 8),0,1,auStack_54,0,local_58);
  if ((int)uVar9 != 1) {
    return uVar9;
  }
  uVar9 = (**(code **)(**(long **)(param_1 + 8) + 0x38))();
  if ((int)uVar9 != 1) {
    return uVar9;
  }
  local_88 = CONCAT22(local_88._2_2_,0xff00);
  local_90 = (undefined8 *)0x0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0x100000000;
  local_68 = 0;
  (**(code **)(**(long **)(param_1 + 8) + 0x48))(*(long **)(param_1 + 8),&local_90,1);
  plVar14 = *(long **)(*(long *)(param_1 + 8) + 0x168);
  (**(code **)(*plVar14 + 0x150))(plVar14,&local_90,*(long *)(param_1 + 8) + 0x50,1);
  lVar11 = *(long *)(*(long *)(param_1 + 8) + 0xf0);
  if (lVar11 != 0) {
    lVar12 = *(long *)(*(long *)(param_1 + 8) + 0x168);
    do {
      if (*(long *)(lVar12 + 0x70) != 0) {
        lVar12 = *(long *)(lVar12 + 0x70) + 0x38;
        goto LAB_02f28ae8;
      }
      lVar12 = *(long *)(lVar12 + 0x80);
    } while (lVar12 != 0);
    lVar12 = 0;
LAB_02f28ae8:
    FUN_02edc9e8(DAT_0440a158,lVar11,lVar12);
  }
LAB_02f28890:
  *(undefined4 *)(param_1 + 0x340) = 4;
  __n = ((ulong)(uint)(param_3 << 2) & 0x3fc) * (ulong)param_4;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0x11;
  __s = (void *)(*DAT_0442d140)(5,__n,0x10);
  if (__s == (void *)0x0) {
    return 0x34;
  }
  memset(__s,0,__n);
  *(ushort *)(param_1 + 0x88) = param_4;
  lVar11 = *(long *)(param_1 + 0x68);
  *(void **)(param_1 + 0x78) = __s;
  *(undefined2 *)(param_1 + 0x8a) = 0;
  *(int *)(param_1 + 0x80) = param_3;
  if (lVar11 == 0) {
    uVar19 = 0;
    goto LAB_02f289c4;
  }
  lVar12 = *(long *)(param_1 + 0x70);
  if ((lVar12 != -1) && (uVar19 = *(uint *)(DAT_0440a140 + 0x38), uVar19 != 0)) {
    uVar6 = 0;
    if (uVar19 != 0) {
      uVar6 = (uint)lVar12 / uVar19;
    }
    for (plVar14 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                             (ulong)((uint)lVar12 - uVar6 * uVar19) * 8); plVar14 != (long *)0x0;
        plVar14 = (long *)*plVar14) {
      if (plVar14[1] == lVar12) {
        *(int *)(plVar14[2] + 0x50) = *(int *)(plVar14[2] + 0x50) + 1;
        puVar20 = (undefined8 *)plVar14[2];
        lVar12 = *(long *)(lVar11 + 0x68);
        goto joined_r0x02f2896c;
      }
    }
  }
  puVar20 = (undefined8 *)0x0;
  lVar12 = *(long *)(lVar11 + 0x68);
joined_r0x02f2896c:
  if (lVar12 == 0) {
    uVar19 = 0;
    lVar12 = *(long *)(lVar11 + 0x38);
    if (lVar12 == 0) goto LAB_02f28988;
LAB_02f28980:
    if ((*(byte *)(lVar12 + 4) >> 1 & 1) == 0) goto LAB_02f28988;
LAB_02f28a2c:
    local_80 = local_80 & 0xffffffff00000000;
    local_88 = 0;
    local_78 = CONCAT71(local_78._1_7_,0xff);
    local_70 = CONCAT71(local_70._1_7_,0xff);
    local_68 = 0;
    local_90 = puVar20;
    fVar21 = (float)FUN_02ed2e94(lVar11,0x21,&local_90);
    uVar19 = (uint)fVar21;
  }
  else {
    uVar19 = *(byte *)(lVar12 + 0x24) >> 4 & 1;
    lVar12 = *(long *)(lVar11 + 0x38);
    if (lVar12 != 0) goto LAB_02f28980;
LAB_02f28988:
    uVar10 = (**(code **)(*(long *)(lVar11 + 0x18) + 0x20))((long *)(lVar11 + 0x18),0x21);
    if ((uVar10 & 1) != 0) goto LAB_02f28a2c;
    puVar8 = *(undefined8 **)(lVar11 + 0x60);
    if (puVar8 == (undefined8 *)0x0) {
LAB_02f289a8:
      lVar11 = *(long *)(lVar11 + 0x58);
      if (lVar11 != 0) goto LAB_02f28c44;
    }
    else {
      puVar13 = (undefined8 *)*puVar8;
      uVar6 = *(uint *)(puVar8 + 1);
      if ((uVar6 == 0) || ((undefined8 *)*puVar13 == puVar20)) {
        puVar8 = puVar13;
      }
      else {
        lVar12 = (ulong)uVar6 * 0x10;
        puVar18 = puVar13;
        do {
          lVar12 = lVar12 + -0x10;
          if (lVar12 == 0) goto LAB_02f289a8;
          puVar8 = puVar18 + 2;
          puVar2 = puVar18 + 2;
          puVar18 = puVar8;
        } while ((undefined8 *)*puVar2 != puVar20);
      }
      if (puVar8 == puVar13 + (ulong)uVar6 * 2) goto LAB_02f289a8;
      lVar11 = puVar8[1];
LAB_02f28c44:
      uVar19 = *(byte *)(lVar11 + 0x20) >> 4 & 1;
    }
  }
  if ((puVar20 != (undefined8 *)0x0) &&
     (iVar4 = *(int *)(puVar20 + 10), *(int *)(puVar20 + 10) = iVar4 + -1, iVar4 + -1 == 0)) {
    (**(code **)*puVar20)(puVar20);
    (*DAT_0442d150)(4,puVar20);
  }
LAB_02f289c4:
  sVar5 = *(short *)(param_1 + 0x338);
  *(short *)(param_1 + 0x338) = (short)uVar19;
  bVar7 = sVar5 != 0;
  *(byte *)(param_1 + 0x33c) = *(byte *)(param_1 + 0x33c) & 0xfd | ((uVar19 != 0) != bVar7) << 1;
  if (((uVar19 != 0) == bVar7) || (*(long *)(param_1 + 8) == 0)) {
    lVar11 = *param_5;
  }
  else {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x110) = 0x42ca0000;
    lVar11 = *param_5;
  }
  if (((lVar11 == 0) || (*(long *)(lVar11 + 200) == 0)) ||
     (*(int *)(*(long *)(lVar11 + 200) + 4) == 0)) {
    uVar9 = 1;
  }
  else {
    puVar20 = (undefined8 *)(*DAT_0442d138)(5,0x70);
    if (puVar20 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 800) = 0;
      uVar9 = 0x34;
    }
    else {
      *(undefined4 *)(puVar20 + 5) = 0;
      *puVar20 = &PTR_LAB_042ac918;
      puVar20[1] = 0;
      *(undefined1 *)(puVar20 + 6) = 0xff;
      *(undefined1 *)(puVar20 + 7) = 0xff;
      *(undefined4 *)(puVar20 + 4) = 0;
      puVar20[0xc] = 0;
      *(undefined4 *)(puVar20 + 0xd) = 0xffffffff;
      puVar20[2] = 0;
      puVar20[3] = 0;
      puVar20[8] = 0;
      puVar20[9] = 0;
      puVar20[10] = 0;
      puVar20[0xb] = 0;
      uVar9 = 1;
      *(undefined8 **)(param_1 + 800) = puVar20;
    }
  }
  return uVar9;
}


