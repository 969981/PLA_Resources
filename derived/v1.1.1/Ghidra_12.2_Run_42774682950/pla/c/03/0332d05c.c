/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332d05c; name: FUN_0332d05c
 */


int FUN_0332d05c(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  byte local_170;
  byte local_16f;
  
  iVar3 = FUN_0332d280(param_1,&local_170);
  if (iVar3 == 0) {
    if ((param_2 & 1) == 0) {
      lVar1 = tpidr_el0;
      do {
        uVar7 = (ulong)local_16f;
        if (*(long *)(lVar1 + 0x38d490) == 0) {
          uVar4 = FUN_0333d16c(0,1);
          *(undefined8 *)(lVar1 + 0x38d490) = uVar4;
          plVar6 = *(long **)(param_1 + 0x338);
        }
        else {
          plVar6 = *(long **)(param_1 + 0x338);
        }
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,uVar7,local_170);
        }
        iVar3 = (**(code **)(*(long *)(param_1 + uVar7 * 0x20 + 0x148) + (ulong)local_170 * 8))
                          (param_1,&local_170);
        plVar6 = *(long **)(param_1 + 0x338);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))(plVar6,uVar7);
        }
      } while (iVar3 == 0);
    }
    else {
      lVar1 = tpidr_el0;
      do {
        bVar2 = local_16f;
        uVar7 = (ulong)local_16f;
        pcVar9 = "TtOther";
        if (local_16f < 0xf) {
          pcVar9 = (&PTR_s_TtPhysics_2012_04350a60)[(char)local_16f];
        }
        if (*(long *)(lVar1 + 0x38d490) == 0) {
          lVar8 = FUN_0333d16c(0,1);
          *(long *)(lVar1 + 0x38d490) = lVar8;
          lVar8 = *(long *)(lVar8 + 0x10);
        }
        else {
          lVar8 = *(long *)(*(long *)(lVar1 + 0x38d490) + 0x10);
        }
        if ((lVar8 != 0) &&
           (puVar5 = *(undefined8 **)(lVar8 + 8), puVar5 < *(undefined8 **)(lVar8 + 0x18))) {
          *puVar5 = pcVar9;
          FUN_032d5acc();
          *(undefined8 **)(lVar8 + 8) = puVar5 + 2;
        }
        plVar6 = *(long **)(param_1 + 0x338);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,bVar2,local_170);
        }
        iVar3 = (**(code **)(*(long *)(param_1 + uVar7 * 0x20 + 0x148) + (ulong)local_170 * 8))
                          (param_1,&local_170);
        plVar6 = *(long **)(param_1 + 0x338);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x18))(plVar6,bVar2);
        }
        if (lVar8 != 0) {
          FUN_032d5b34(lVar8,&DAT_0390f40e);
        }
      } while (iVar3 == 0);
    }
  }
  return iVar3;
}


