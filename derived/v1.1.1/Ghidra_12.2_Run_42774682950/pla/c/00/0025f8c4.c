/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025f8c4; name: FUN_0025f8c4
 */


void FUN_0025f8c4(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ushort *puVar8;
  
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0xc0) != 0) {
      uVar7 = 0;
      lVar4 = *(long *)(param_1 + 0xa0);
      plVar5 = (long *)(lVar2 + 0x10);
      lVar6 = *plVar5;
      do {
        if (lVar6 != 0) {
          *plVar5 = 0;
        }
        plVar5 = (long *)(lVar2 + uVar7 * 0x30 + 8);
        if (*plVar5 != 0) {
          *plVar5 = 0;
        }
        plVar5 = (long *)(lVar2 + uVar7 * 0x30 + 0x28);
        if (*plVar5 != 0) {
          *plVar5 = 0;
        }
        puVar8 = (ushort *)(lVar4 + uVar7 * 0xa0);
        uVar3 = *puVar8;
        if (uVar3 != 0) {
          lVar4 = 0;
          plVar5 = (long *)(lVar2 + uVar7 * 0x30 + 0x18);
          plVar1 = *(long **)*plVar5;
          do {
            if (plVar1 == (long *)0x0) {
              if ((ulong)uVar3 <= lVar4 + 1U) break;
            }
            else {
              (**(code **)(*plVar1 + 0x18))();
              (**(code **)**(undefined8 **)(*plVar5 + lVar4 * 8))();
              uVar3 = *puVar8;
              if ((ulong)uVar3 <= lVar4 + 1U) break;
            }
            lVar4 = lVar4 + 1;
            plVar1 = *(long **)(*plVar5 + lVar4 * 8);
          } while( true );
        }
        uVar7 = uVar7 + 1;
        if (*(uint *)(param_1 + 0xc0) <= uVar7) break;
        lVar4 = *(long *)(param_1 + 0xa0);
        lVar2 = *(long *)(param_1 + 0xa8);
        plVar5 = (long *)(lVar2 + uVar7 * 0x30 + 0x10);
        lVar6 = *plVar5;
      } while( true );
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (0 < *(int *)(param_1 + 0x50)) {
    lVar2 = 0;
    lVar4 = 8;
    do {
      (**(code **)(**(long **)(*(long *)(param_1 + 0x58) + lVar4) + 0x18))();
      (**(code **)**(undefined8 **)(*(long *)(param_1 + 0x58) + lVar4))();
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x28;
    } while (lVar2 < *(int *)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  plVar5 = *(long **)(param_1 + 0x40);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  lVar2 = *(long *)(param_1 + 0x98);
  while (param_1 + 0x90 != lVar2) {
    plVar5 = (long *)(lVar2 + -8);
    lVar2 = *(long *)(lVar2 + 8);
    (**(code **)(*plVar5 + 0x18))(plVar5,param_2);
    (**(code **)*plVar5)(plVar5);
  }
  return;
}


