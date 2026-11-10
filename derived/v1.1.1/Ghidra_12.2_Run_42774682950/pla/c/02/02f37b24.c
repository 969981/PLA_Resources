/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f37b24; name: FUN_02f37b24
 */


void FUN_02f37b24(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  for (lVar2 = DAT_0442c008; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x70)) {
    if ((*(long *)(lVar2 + 0x60) != 0) &&
       (lVar3 = *(long *)(*(long *)(lVar2 + 0x60) + 0x60), lVar3 != 0)) {
      if ((param_2 & 1) == 0) {
        do {
          lVar4 = *(long *)(lVar3 + 8);
          uVar1 = FUN_02f3f884(lVar3,param_1);
          if ((uVar1 & 1) != 0) {
            (*(code *)**(undefined8 **)(lVar3 + 0x58))((undefined8 *)(lVar3 + 0x58),0xffffffff);
          }
          lVar3 = lVar4;
        } while (lVar4 != 0);
      }
      else {
        do {
          lVar4 = *(long *)(lVar3 + 8);
          uVar1 = FUN_02f3f884(lVar3,param_1);
          if (((uVar1 & 1) != 0) && (uVar1 = FUN_02f3f894(lVar3,param_1), (uVar1 & 1) == 0)) {
            (*(code *)**(undefined8 **)(lVar3 + 0x58))((undefined8 *)(lVar3 + 0x58),0xffffffff);
          }
          lVar3 = lVar4;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}


