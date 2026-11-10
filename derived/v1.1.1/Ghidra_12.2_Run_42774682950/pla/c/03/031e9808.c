/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e9808; name: FUN_031e9808
 */


void FUN_031e9808(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar9 = tpidr_el0;
  if (*(long *)(lVar9 + 0x38d490) == 0) {
    lVar11 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar11;
    lVar9 = *(long *)(lVar11 + 0x10);
  }
  else {
    lVar9 = *(long *)(*(long *)(lVar9 + 0x38d490) + 0x10);
  }
  if (lVar9 != 0) {
    puVar1 = *(undefined8 **)(lVar9 + 8);
    uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = "TtupdateGenerators";
      uVar6 = nn::os::GetSystemTick();
      puVar1[1] = uVar6;
    }
  }
  if ((param_2 & 1) == 0) {
    uVar6 = CONCAT44(*(undefined4 *)(param_1 + 0x184),*(undefined4 *)(param_1 + 0x184));
  }
  else {
    uVar6 = NEON_fmov(0xbf800000,4);
  }
  if (0 < *(int *)(param_1 + 0xa8)) {
    lVar10 = 0;
    lVar11 = 0;
    lVar12 = 0x30;
    do {
      lVar8 = *(long *)(param_1 + 0xa0);
      if ((param_2 & 1) != 0) {
        *(undefined1 *)(lVar8 + lVar12 + 0x22) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      puVar1 = (undefined8 *)(lVar8 + lVar12);
      (**(code **)(*(long *)puVar1[-6] + 0x40))();
      uVar7 = (**(code **)(*(long *)puVar1[-6] + 0x58))();
      if ((uVar7 & 1) != 0) {
        *(undefined1 *)(puVar1 + 4) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      lVar8 = puVar1[-6];
      fVar14 = (float)uVar6;
      fVar16 = (float)((ulong)uVar6 >> 0x20);
      uVar15 = *(undefined8 *)(lVar8 + 0x38);
      uVar13 = *(undefined8 *)(lVar8 + 0x30);
      bVar2 = fVar14 < ABS((float)uVar13 - (float)*puVar1);
      bVar3 = fVar16 < ABS((float)((ulong)uVar13 >> 0x20) - (float)((ulong)*puVar1 >> 0x20));
      bVar4 = fVar14 < ABS((float)uVar15 - (float)puVar1[1]);
      bVar5 = fVar16 < ABS((float)((ulong)uVar15 >> 0x20) - (float)((ulong)puVar1[1] >> 0x20));
      if (((fVar14 < ABS((float)*(undefined8 *)(lVar8 + 0x48) - (float)puVar1[3]) ||
           (fVar14 < ABS((float)*(undefined8 *)(lVar8 + 0x40) - (float)puVar1[2]) ||
           fVar16 < ABS((float)((ulong)*(undefined8 *)(lVar8 + 0x40) >> 0x20) -
                        (float)((ulong)puVar1[2] >> 0x20)))) ||
           (bVar5 || (bVar4 || (bVar2 || bVar3)))) || (*(char *)(puVar1 + 4) != '\0')) {
        if ((bVar5 || (bVar4 || (bVar2 || bVar3))) || (*(char *)(puVar1 + 4) != '\0')) {
          local_70 = 0;
          uStack_68 = 0;
          local_80 = uVar13;
          uStack_78 = uVar15;
          (**(code **)(*(long *)puVar1[-6] + 0x48))
                    (*(undefined4 *)(param_1 + 0x180),(long *)puVar1[-6],&local_80,param_1 + 0x150,
                     puVar1 + -4);
          uVar15 = *(undefined8 *)(lVar8 + 0x38);
          uVar13 = *(undefined8 *)(lVar8 + 0x30);
        }
        puVar1[1] = uVar15;
        *puVar1 = uVar13;
        uVar15 = *(undefined8 *)(lVar8 + 0x48);
        uVar13 = *(undefined8 *)(lVar8 + 0x40);
        uVar17 = puVar1[-4];
        uVar19 = puVar1[-1];
        uVar18 = puVar1[-2];
        puVar1[3] = uVar15;
        puVar1[2] = uVar13;
        fVar14 = (float)((ulong)uVar13 >> 0x20);
        fVar16 = (float)((ulong)uVar15 >> 0x20);
        lVar8 = *(long *)(param_1 + 0x20) + lVar10;
        *(ulong *)(lVar8 + 0x28) =
             CONCAT44(fVar16 + (float)((ulong)puVar1[-3] >> 0x20),(float)uVar15 + (float)puVar1[-3])
        ;
        *(ulong *)(lVar8 + 0x20) =
             CONCAT44(fVar14 + (float)((ulong)uVar17 >> 0x20),(float)uVar13 + (float)uVar17);
        *(ulong *)(lVar8 + 0x38) =
             CONCAT44(fVar16 + (float)((ulong)uVar19 >> 0x20),(float)uVar15 + (float)uVar19);
        *(ulong *)(lVar8 + 0x30) =
             CONCAT44(fVar14 + (float)((ulong)uVar18 >> 0x20),(float)uVar13 + (float)uVar18);
        *(undefined1 *)(lVar8 + 0x40) = 1;
        *(undefined1 *)((long)puVar1 + 0x21) = 1;
        *(undefined1 *)(param_1 + 0xc4) = 1;
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0x60;
      lVar10 = lVar10 + 0x50;
    } while (lVar11 < *(int *)(param_1 + 0xa8));
  }
  if (lVar9 != 0) {
    puVar1 = *(undefined8 **)(lVar9 + 8);
    uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar7, puVar1 != (undefined8 *)0x0)) {
      *puVar1 = &DAT_0390f40e;
      uVar6 = nn::os::GetSystemTick();
      puVar1[1] = uVar6;
    }
  }
  return;
}


