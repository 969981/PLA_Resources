/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094b1c0; name: FUN_0094b1c0
 */


void FUN_0094b1c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  
  *(undefined2 *)(param_1 + 3) = 0;
  *param_1 = &PTR_LAB_041c2e00;
  param_1[1] = &PTR_LAB_041c2ee8;
  param_1[2] = 0;
  nn::os::InitializeLightEvent((long)param_1 + 0x24,0,1);
  param_1[6] = 0;
  plVar5 = param_1 + 7;
  uVar2 = FUN_0094cba4(param_3 + 8);
  if ((uVar2 & 1) == 0) {
    param_3 = 0;
  }
  param_1[7] = param_3;
  param_1[9] = param_2;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  puVar7 = (undefined8 *)(param_3 + 8);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  lVar4 = FUN_0094cc80();
  do {
    if (plVar3 == (long *)0x0) {
      param_3 = 0;
LAB_0094b2c0:
      param_1[8] = param_3;
      bVar1 = FUN_009491f4(*plVar5 + 8);
      *(byte *)(param_1 + 0xd) = bVar1 & 1;
      return;
    }
    if (plVar3 == (long *)lVar4) {
      lVar4 = *(long *)(param_3 + 0x38);
      do {
        plVar5 = (long *)(*(code *)**(undefined8 **)(lVar4 + 8))();
        lVar6 = FUN_0094cc80();
        while( true ) {
          if (plVar5 == (long *)0x0) {
            plVar5 = puVar7 + 6;
            uVar2 = (**(code **)(*(long *)*plVar5 + 0x88))();
            if ((uVar2 & 1) != 0) {
              param_3 = *plVar5;
            }
            goto LAB_0094b2c0;
          }
          if (plVar5 == (long *)lVar6) break;
          plVar5 = (long *)*plVar5;
        }
        puVar7 = (undefined8 *)(lVar4 + 8);
        param_3 = lVar4;
        lVar4 = *(long *)(lVar4 + 0x38);
      } while( true );
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}


