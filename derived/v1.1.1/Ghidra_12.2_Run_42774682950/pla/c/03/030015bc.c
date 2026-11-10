/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030015bc; name: FUN_030015bc
 */


void FUN_030015bc(long param_1,int param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(param_1 + 0x78);
  puVar2 = *(undefined8 **)(lVar3 + (long)param_2 * 8);
  if (param_3 == (undefined8 *)0x0) {
    if (puVar2 != (undefined8 *)0x0) {
      lVar3 = tpidr_el0;
      lVar4 = *(long *)(lVar3 + 0x38d490);
      if (lVar4 == 0) {
        lVar4 = FUN_0333d16c(0,1);
        *(long *)(lVar3 + 0x38d490) = lVar4;
      }
      plVar1 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
      (**(code **)(*plVar1 + 0x18))(plVar1,puVar2,0x30);
      lVar3 = *(long *)(param_1 + 0x78);
    }
    *(undefined8 *)(lVar3 + (long)param_2 * 8) = 0;
  }
  else {
    if (puVar2 == (undefined8 *)0x0) {
      lVar3 = tpidr_el0;
      lVar4 = *(long *)(lVar3 + 0x38d490);
      if (lVar4 == 0) {
        lVar4 = FUN_0333d16c(0,1);
        *(long *)(lVar3 + 0x38d490) = lVar4;
      }
      plVar1 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
      puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1,0x30,0);
      *puVar2 = 0xffffffffffffffff;
      puVar2[1] = 0xffffffffffffffff;
      puVar2[2] = 0xffffffffffffffff;
      puVar2[3] = 0xffffffffffffffff;
      puVar2[4] = 0xffffffffffffffff;
      puVar2[5] = 0xffffffffffffffff;
      *(undefined8 **)(*(long *)(param_1 + 0x78) + (long)param_2 * 8) = puVar2;
    }
    uVar5 = *param_3;
    puVar2[1] = param_3[1];
    *puVar2 = uVar5;
    uVar5 = param_3[2];
    puVar2[3] = param_3[3];
    puVar2[2] = uVar5;
    uVar5 = param_3[4];
    puVar2[5] = param_3[5];
    puVar2[4] = uVar5;
  }
  return;
}


