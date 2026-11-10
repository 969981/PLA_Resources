/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03001710; name: FUN_03001710
 */


void FUN_03001710(long param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x88) + (long)param_2 * 8);
  if (param_3 == (undefined8 *)0x0) {
    if (puVar3 != (undefined8 *)0x0) {
      lVar1 = tpidr_el0;
      lVar5 = *(long *)(lVar1 + 0x38d490);
      if (lVar5 == 0) {
        lVar5 = FUN_0333d16c(0,1);
        *(long *)(lVar1 + 0x38d490) = lVar5;
      }
      plVar2 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
      (**(code **)(*plVar2 + 0x18))(plVar2,puVar3,0xc0);
      *(undefined8 *)(*(long *)(param_1 + 0x88) + (long)param_2 * 8) = 0;
    }
  }
  else {
    if (puVar3 == (undefined8 *)0x0) {
      lVar1 = tpidr_el0;
      lVar5 = *(long *)(lVar1 + 0x38d490);
      if (lVar5 == 0) {
        lVar5 = FUN_0333d16c(0,1);
        *(long *)(lVar1 + 0x38d490) = lVar5;
      }
      plVar2 = *(long **)(*(long *)(lVar5 + 8) + 0x58);
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0xc0,0);
      *puVar3 = 0xffffffffffffffff;
      puVar3[1] = 0xffffffffffffffff;
      puVar3[2] = 0xffffffffffffffff;
      puVar3[3] = 0xffffffffffffffff;
      puVar3[4] = 0xffffffffffffffff;
      puVar3[5] = 0xffffffffffffffff;
      puVar3[6] = 0xffffffffffffffff;
      puVar3[7] = 0xffffffffffffffff;
      puVar3[8] = 0xffffffffffffffff;
      puVar3[9] = 0xffffffffffffffff;
      puVar3[10] = 0xffffffffffffffff;
      puVar3[0xb] = 0xffffffffffffffff;
      puVar3[0xc] = 0xffffffffffffffff;
      puVar3[0xd] = 0xffffffffffffffff;
      puVar3[0xe] = 0xffffffffffffffff;
      puVar3[0xf] = 0xffffffffffffffff;
      puVar3[0x10] = 0xffffffffffffffff;
      puVar3[0x11] = 0xffffffffffffffff;
      puVar3[0x12] = 0xffffffffffffffff;
      puVar3[0x13] = 0xffffffffffffffff;
      puVar3[0x14] = 0xffffffffffffffff;
      puVar3[0x15] = 0xffffffffffffffff;
      puVar3[0x16] = 0xffffffffffffffff;
      puVar3[0x17] = 0xffffffffffffffff;
      *(undefined8 **)(*(long *)(param_1 + 0x88) + (long)param_2 * 8) = puVar3;
    }
    uVar4 = *param_3;
    puVar3[1] = param_3[1];
    *puVar3 = uVar4;
    uVar4 = param_3[2];
    puVar3[3] = param_3[3];
    puVar3[2] = uVar4;
    uVar4 = param_3[4];
    puVar3[5] = param_3[5];
    puVar3[4] = uVar4;
    uVar4 = param_3[6];
    puVar3[7] = param_3[7];
    puVar3[6] = uVar4;
    uVar4 = param_3[8];
    puVar3[9] = param_3[9];
    puVar3[8] = uVar4;
    uVar4 = param_3[10];
    puVar3[0xb] = param_3[0xb];
    puVar3[10] = uVar4;
    uVar4 = param_3[0xc];
    puVar3[0xd] = param_3[0xd];
    puVar3[0xc] = uVar4;
    uVar4 = param_3[0xe];
    puVar3[0xf] = param_3[0xf];
    puVar3[0xe] = uVar4;
    uVar4 = param_3[0x10];
    puVar3[0x11] = param_3[0x11];
    puVar3[0x10] = uVar4;
    uVar4 = param_3[0x17];
    puVar3[0x15] = param_3[0x15];
    puVar3[0x17] = uVar4;
    puVar3[0x13] = param_3[0x13];
    puVar3[0x12] = param_3[0x12];
    uVar4 = param_3[0x14];
    puVar3[0x16] = param_3[0x16];
    puVar3[0x14] = uVar4;
  }
  return;
}


