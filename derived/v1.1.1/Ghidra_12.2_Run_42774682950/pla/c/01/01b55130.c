/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b55130; name: FUN_01b55130
 */


void FUN_01b55130(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *local_18;
  
  if ((*(long *)(param_1 + 0xf0) != 0) &&
     (FUN_00b911c4(&local_18,*(long *)(param_1 + 0xf0)), local_18 != (long *)0x0)) {
    FUN_01ba08ec(local_18);
    if ((param_2 & 1) != 0) {
      FUN_01b9ee74(local_18);
    }
    lVar9 = local_18[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar2 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_18 + 0x20))(local_18);
      puVar8 = *(undefined8 **)(param_1 + 0x140);
      puVar7 = (undefined8 *)PTR_DAT_04379570;
      goto joined_r0x01b55214;
    }
  }
  puVar8 = *(undefined8 **)(param_1 + 0x140);
  puVar7 = (undefined8 *)PTR_DAT_04379570;
joined_r0x01b55214:
  PTR_DAT_04379570 = (undefined *)puVar7;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = 0;
    puVar8[1] = 0;
    puVar8[7] = 0;
    *(undefined4 *)((long)puVar8 + 0x3f) = 0;
    *(undefined1 *)((long)puVar8 + 0x43) = 1;
    puVar8[5] = 0;
    puVar8[6] = 0;
    uVar3 = *puVar7;
    uVar4 = puVar7[1];
    puVar8[4] = 0;
    puVar8[0xd] = 0;
    puVar8[2] = uVar3;
    puVar8[3] = uVar4;
    *(undefined8 *)((long)puVar8 + 0x44) = 0x1ffff00000000;
    *(undefined4 *)((long)puVar8 + 0x4c) = 0xffff00;
    puVar8[0xe] = 0;
    puVar8[0xf] = 0;
    puVar8[0xb] = 0;
    puVar8[0xc] = 0;
  }
  return;
}


