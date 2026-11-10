/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00854534; name: FUN_00854534
 */


void FUN_00854534(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if (DAT_043a5800 != 0) {
    lVar1 = FUN_007e4e20();
    if (lVar1 != 0) {
      FUN_007e4e20();
      FUN_007e5478();
    }
    FUN_00847a24(param_1 + 0x10,DAT_043a57f8);
    DAT_043a5800 = 0;
  }
  DAT_043a57f8 = 0;
  if (*(long *)(param_1 + 8) != 0) {
    if (*(long *)(param_1 + 0x68) != 0) {
      FUN_00856ff4();
    }
    if (*(long **)(param_1 + 0x40) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))();
      (**(code **)(**(long **)(param_1 + 8) + 0x58))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (*(long **)(param_1 + 0x48) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x18))();
      (**(code **)(**(long **)(param_1 + 8) + 0x60))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x70);
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3);
      FUN_0081a800(puVar3);
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x90);
    if (lVar1 != 0) {
      FUN_00844c14(lVar1);
      FUN_0081a800(lVar1);
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x88);
    if (lVar1 != 0) {
      FUN_00844c14(lVar1);
      FUN_0081a800(lVar1);
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x80);
    if (lVar1 != 0) {
      FUN_00844c14(lVar1);
      FUN_0081a800(lVar1);
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    lVar1 = *(long *)(param_1 + 0x78);
    if (lVar1 != 0) {
      FUN_00844c14(lVar1);
      FUN_0081a800(lVar1);
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    if (*(long **)(param_1 + 0x60) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x60) + 0x18))();
    }
    FUN_0084763c(param_1 + 0x10);
    plVar2 = *(long **)(param_1 + 0x58);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
      puVar3 = *(undefined8 **)(param_1 + 0x58);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3);
        FUN_0081a800(puVar3);
      }
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    if (*(long *)(param_1 + 0x60) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0xa8))();
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      (**(code **)(**(long **)(param_1 + 8) + 0xb0))();
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    (**(code **)(**(long **)(param_1 + 8) + 200))();
    plVar2 = *(long **)(param_1 + 8);
    (**(code **)(*plVar2 + 0x40))(plVar2,plVar2);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}


