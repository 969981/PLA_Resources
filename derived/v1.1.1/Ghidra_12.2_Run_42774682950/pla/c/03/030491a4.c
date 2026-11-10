/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030491a4; name: FUN_030491a4
 */


void FUN_030491a4(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x1c) != 0xaaa00) {
    lVar3 = *(long *)(param_2 + 0x40);
    uVar1 = *(uint *)(param_1 + 0x2c);
    if ((*(uint *)(lVar3 + 0x108) & uVar1) != 0) {
      if ((*(uint *)(lVar3 + 0x110) & uVar1) != 0) {
        (**(code **)(**(long **)(lVar3 + 0x118) + 0x30))
                  (*(long **)(lVar3 + 0x118),param_2,param_3,param_4,param_5,param_6,param_7,param_1
                  );
      }
      if (1 < *(int *)(lVar3 + 0x10c)) {
        if ((*(uint *)(lVar3 + 0x120) & uVar1) != 0) {
          (**(code **)(**(long **)(lVar3 + 0x128) + 0x30))
                    (*(long **)(lVar3 + 0x128),param_2,param_3,param_4,param_5,param_6,param_7,
                     param_1);
        }
        if (2 < *(int *)(lVar3 + 0x10c)) {
          if ((*(uint *)(lVar3 + 0x130) & uVar1) != 0) {
            (**(code **)(**(long **)(lVar3 + 0x138) + 0x30))
                      (*(long **)(lVar3 + 0x138),param_2,param_3,param_4,param_5,param_6,param_7,
                       param_1);
          }
          if (3 < *(int *)(lVar3 + 0x10c)) {
            if ((*(uint *)(lVar3 + 0x140) & uVar1) != 0) {
              (**(code **)(**(long **)(lVar3 + 0x148) + 0x30))
                        (*(long **)(lVar3 + 0x148),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_1);
            }
            if (4 < *(int *)(lVar3 + 0x10c)) {
              if ((*(uint *)(lVar3 + 0x150) & uVar1) != 0) {
                (**(code **)(**(long **)(lVar3 + 0x158) + 0x30))
                          (*(long **)(lVar3 + 0x158),param_2,param_3,param_4,param_5,param_6,param_7
                           ,param_1);
              }
              if (5 < *(int *)(lVar3 + 0x10c)) {
                puVar4 = (undefined8 *)(lVar3 + 0x168);
                lVar2 = 5;
                do {
                  if ((*(uint *)(puVar4 + -1) & uVar1) != 0) {
                    (**(code **)(*(long *)*puVar4 + 0x30))
                              ((long *)*puVar4,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_1);
                  }
                  lVar2 = lVar2 + 1;
                  puVar4 = puVar4 + 2;
                } while (lVar2 < *(int *)(lVar3 + 0x10c));
              }
            }
          }
        }
      }
    }
  }
  return;
}


