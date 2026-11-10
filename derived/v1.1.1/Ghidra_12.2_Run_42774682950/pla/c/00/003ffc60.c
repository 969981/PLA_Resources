/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ffc60; name: FUN_003ffc60
 */


undefined8 FUN_003ffc60(long param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 0x150) != 0)) {
    if (param_3 != 0) {
      FUN_00400140(*(undefined8 *)(param_1 + 0x378));
    }
    lVar4 = FUN_00405c90(*(undefined8 *)(param_1 + 0x28),param_2);
    if (lVar4 == 0) {
      lVar4 = 0;
      bVar3 = false;
      *(undefined4 *)(param_2 + 0x1b0) = 1;
    }
    else {
      lVar4 = FUN_00405a70(*(undefined8 *)(param_1 + 0x28),lVar4);
      puVar5 = *(undefined8 **)(lVar4 + 0x220);
      if ((puVar5 == (undefined8 *)0x0) ||
         (puVar6 = *(undefined8 **)(lVar4 + 0x218), puVar6 == (undefined8 *)0x0)) {
        bVar3 = true;
        *(undefined4 *)(param_2 + 0x1b0) = 1;
      }
      else {
        puVar1 = (undefined8 *)(param_1 + 0x40);
        puVar2 = (undefined8 *)(param_1 + 0x38);
        if (puVar5 == puVar1) {
          if (puVar6 == puVar2) {
            *puVar2 = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          else {
            *puVar1 = puVar6;
            puVar6[0x44] = puVar1;
          }
        }
        else if (puVar6 == puVar2) {
          *puVar2 = puVar5;
          puVar5[0x43] = puVar2;
        }
        else {
          puVar5[0x43] = puVar6;
          *(undefined8 **)(*(long *)(lVar4 + 0x218) + 0x220) = puVar5;
        }
        bVar3 = true;
        *(long *)(lVar4 + 0x218) = 0;
        *(undefined8 *)(lVar4 + 0x220) = 0;
        *(undefined4 *)(param_2 + 0x1b0) = 1;
      }
    }
    if (param_3 != 0) {
      FUN_00400160(*(undefined8 *)(param_1 + 0x378));
    }
    if (*(code **)(param_1 + 0x60) != (code *)0x0) {
      (**(code **)(param_1 + 0x60))(param_1,param_2);
    }
    if (bVar3) {
      FUN_003fef10(lVar4);
      return 1;
    }
  }
  return 0;
}


