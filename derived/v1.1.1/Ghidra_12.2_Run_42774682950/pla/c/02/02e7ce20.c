/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7ce20; name: FUN_02e7ce20
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02e7ce20(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    lVar3 = *(long *)(param_1 + 0x58);
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    lVar3 = *(long *)(param_1 + 0x58);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x90);
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    lVar3 = *(long *)(param_1 + 0x90);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 200);
  }
  else {
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0;
    lVar3 = *(long *)(param_1 + 200);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x100);
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined4 *)(param_1 + 0xd4) = 0;
    lVar3 = *(long *)(param_1 + 0x100);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x138);
  }
  else {
    *(undefined4 *)(param_1 + 0x108) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    lVar3 = *(long *)(param_1 + 0x138);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x170);
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x144) = 0;
    lVar3 = *(long *)(param_1 + 0x170);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x1a8);
  }
  else {
    *(undefined4 *)(param_1 + 0x178) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    lVar3 = *(long *)(param_1 + 0x1a8);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x1e0);
  }
  else {
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined4 *)(param_1 + 0x1b4) = 0;
    lVar3 = *(long *)(param_1 + 0x1e0);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x218);
  }
  else {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    lVar3 = *(long *)(param_1 + 0x218);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x250);
  }
  else {
    *(undefined4 *)(param_1 + 0x220) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(param_1 + 0x224) = 0;
    lVar3 = *(long *)(param_1 + 0x250);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x288);
  }
  else {
    *(undefined4 *)(param_1 + 600) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x25c) = 0;
    lVar3 = *(long *)(param_1 + 0x288);
  }
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x2c0);
  }
  else {
    *(undefined4 *)(param_1 + 0x290) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined4 *)(param_1 + 0x294) = 0;
    lVar3 = *(long *)(param_1 + 0x2c0);
  }
  if (lVar3 == 0) {
    iVar1 = *(int *)(param_1 + 0x308);
  }
  else {
    *(undefined4 *)(param_1 + 0x2c8) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    iVar1 = *(int *)(param_1 + 0x308);
  }
  do {
    if (iVar1 == 0) {
      if (*(long *)(param_1 + 0x2f8) != 0) {
        *(undefined4 *)(param_1 + 0x300) = 0;
        FUN_02f59e60(0);
        *(undefined8 *)(param_1 + 0x2f8) = 0;
        *(undefined4 *)(param_1 + 0x304) = 0;
      }
      return;
    }
    if (*(int *)(param_1 + 0x300) == 0) {
LAB_02e7ced4:
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = (long *)**(long **)(param_1 + 0x2f8);
      if (plVar2 == (long *)0x0) {
        uVar4 = 0;
        do {
          if (*(int *)(param_1 + 0x300) - 1 == uVar4) goto LAB_02e7ced4;
          uVar4 = uVar4 + 1;
          plVar2 = (long *)(*(long **)(param_1 + 0x2f8))[uVar4 & 0xffffffff];
        } while (plVar2 == (long *)0x0);
      }
    }
    (**(code **)(*plVar2 + 0x18))();
    iVar1 = *(int *)(param_1 + 0x308);
  } while( true );
}


