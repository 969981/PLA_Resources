/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015540ac; name: FUN_015540ac
 */


void FUN_015540ac(undefined8 param_1,long param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  long lVar19;
  float fVar20;
  float fVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  long lVar25;
  float fVar26;
  int iVar27;
  float fVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  float fVar49;
  undefined2 local_3c;
  undefined1 local_3a;
  long *local_38;
  
  if ((*(long *)(param_2 + 0x480) != 0) && (FUN_01555480(&local_38), local_38 != (long *)0x0)) {
    if ((float)param_1 < 1.0) {
      fVar12 = (float)(**(code **)(PTR_PTR_0437a4c8 + (ulong)*(uint *)(param_2 + 0x550) * 8))
                                (param_1);
      fVar49 = 1.0 - fVar12;
      uVar42 = *(undefined8 *)(param_2 + 0x518);
      uVar41 = *(undefined8 *)(param_2 + 0x510);
      fVar15 = (float)*(undefined8 *)(param_2 + 0x4b0);
      fVar17 = (float)((ulong)*(undefined8 *)(param_2 + 0x4b0) >> 0x20);
      fVar18 = (float)*(undefined8 *)(param_2 + 0x4b8);
      fVar20 = (float)((ulong)*(undefined8 *)(param_2 + 0x4b8) >> 0x20);
      uVar48 = *(undefined8 *)(param_2 + 0x528);
      uVar47 = *(undefined8 *)(param_2 + 0x520);
      iVar27 = *(int *)(param_2 + 0x540);
      iVar31 = *(int *)(param_2 + 0x4e0);
      fVar43 = (float)*(undefined8 *)(param_2 + 0x4c0);
      fVar44 = (float)((ulong)*(undefined8 *)(param_2 + 0x4c0) >> 0x20);
      fVar45 = (float)*(undefined8 *)(param_2 + 0x4c8);
      fVar46 = (float)((ulong)*(undefined8 *)(param_2 + 0x4c8) >> 0x20);
      iVar9 = (int)(fVar49 * (float)*(int *)(param_2 + 0x4e4) +
                   fVar12 * (float)*(int *)(param_2 + 0x544));
      uVar39 = *(undefined8 *)(param_2 + 0x508);
      uVar37 = *(undefined8 *)(param_2 + 0x500);
      fVar33 = (float)*(undefined8 *)(param_2 + 0x4a0);
      fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0x4a0) >> 0x20);
      fVar35 = (float)*(undefined8 *)(param_2 + 0x4a8);
      fVar36 = (float)((ulong)*(undefined8 *)(param_2 + 0x4a8) >> 0x20);
      uVar40 = *(undefined8 *)(param_2 + 0x538);
      uVar38 = *(undefined8 *)(param_2 + 0x530);
      fVar21 = (float)*(undefined8 *)(param_2 + 0x4d0);
      fVar23 = (float)((ulong)*(undefined8 *)(param_2 + 0x4d0) >> 0x20);
      fVar24 = (float)*(undefined8 *)(param_2 + 0x4d8);
      fVar26 = (float)((ulong)*(undefined8 *)(param_2 + 0x4d8) >> 0x20);
      fVar32 = *(float *)(param_2 + 0x54c);
      iVar10 = (int)(fVar49 * (float)*(int *)(param_2 + 0x4e8) +
                    fVar12 * (float)*(int *)(param_2 + 0x548));
      fVar28 = *(float *)(param_2 + 0x4ec);
      *(undefined1 *)(local_38 + 0x3e) = 1;
      *(undefined1 *)((long)local_38 + 499) = local_3a;
      *(undefined2 *)((long)local_38 + 0x1f1) = local_3c;
      *(undefined4 *)((long)local_38 + 500) = 3;
      *(int *)(local_38 + 0x48) = (int)(fVar49 * (float)iVar31 + fVar12 * (float)iVar27);
      local_38[0x41] =
           CONCAT44(fVar36 + ((float)((ulong)uVar39 >> 0x20) - fVar36) * fVar12,
                    fVar35 + ((float)uVar39 - fVar35) * fVar12);
      local_38[0x40] =
           CONCAT44(fVar34 + ((float)((ulong)uVar37 >> 0x20) - fVar34) * fVar12,
                    fVar33 + ((float)uVar37 - fVar33) * fVar12);
      local_38[0x43] =
           CONCAT44(fVar20 + ((float)((ulong)uVar42 >> 0x20) - fVar20) * fVar12,
                    fVar18 + ((float)uVar42 - fVar18) * fVar12);
      local_38[0x42] =
           CONCAT44(fVar17 + ((float)((ulong)uVar41 >> 0x20) - fVar17) * fVar12,
                    fVar15 + ((float)uVar41 - fVar15) * fVar12);
      *(float *)((long)local_38 + 0x24c) = fVar49 * fVar28 + fVar12 * fVar32;
      local_38[0x45] =
           CONCAT44(fVar46 + ((float)((ulong)uVar48 >> 0x20) - fVar46) * fVar12,
                    fVar45 + ((float)uVar48 - fVar45) * fVar12);
      local_38[0x44] =
           CONCAT44(fVar44 + ((float)((ulong)uVar47 >> 0x20) - fVar44) * fVar12,
                    fVar43 + ((float)uVar47 - fVar43) * fVar12);
      local_38[0x47] =
           CONCAT44(fVar26 + ((float)((ulong)uVar40 >> 0x20) - fVar26) * fVar12,
                    fVar24 + ((float)uVar40 - fVar24) * fVar12);
      local_38[0x46] =
           CONCAT44(fVar23 + ((float)((ulong)uVar38 >> 0x20) - fVar23) * fVar12,
                    fVar21 + ((float)uVar38 - fVar21) * fVar12);
    }
    else {
      uVar6 = *(undefined2 *)(param_2 + 0x4f1);
      uVar5 = *(undefined1 *)(param_2 + 0x4f3);
      uVar2 = *(undefined4 *)(param_2 + 0x4f4);
      lVar11 = *(long *)(param_2 + 0x4f8);
      lVar14 = *(long *)(param_2 + 0x508);
      lVar13 = *(long *)(param_2 + 0x500);
      lVar19 = *(long *)(param_2 + 0x518);
      lVar16 = *(long *)(param_2 + 0x510);
      lVar25 = *(long *)(param_2 + 0x528);
      lVar22 = *(long *)(param_2 + 0x520);
      lVar30 = *(long *)(param_2 + 0x538);
      lVar29 = *(long *)(param_2 + 0x530);
      uVar3 = *(undefined4 *)(param_2 + 0x540);
      iVar9 = *(int *)(param_2 + 0x544);
      iVar10 = *(int *)(param_2 + 0x548);
      uVar4 = *(undefined4 *)(param_2 + 0x54c);
      *(undefined1 *)(local_38 + 0x3e) = 1;
      *(undefined1 *)((long)local_38 + 499) = uVar5;
      *(undefined2 *)((long)local_38 + 0x1f1) = uVar6;
      *(undefined4 *)((long)local_38 + 500) = uVar2;
      local_38[0x3f] = lVar11;
      local_38[0x41] = lVar14;
      local_38[0x40] = lVar13;
      local_38[0x43] = lVar19;
      local_38[0x42] = lVar16;
      *(undefined4 *)(local_38 + 0x48) = uVar3;
      *(undefined4 *)((long)local_38 + 0x24c) = uVar4;
      local_38[0x45] = lVar25;
      local_38[0x44] = lVar22;
      local_38[0x47] = lVar30;
      local_38[0x46] = lVar29;
    }
    *(int *)((long)local_38 + 0x244) = iVar9;
    lVar11 = local_38[0xb];
    *(int *)(local_38 + 0x49) = iVar10;
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar9 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))(local_38);
    }
  }
  return;
}


