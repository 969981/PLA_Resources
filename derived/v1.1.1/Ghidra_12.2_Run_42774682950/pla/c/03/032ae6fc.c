/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ae6fc; name: FUN_032ae6fc
 */


undefined8 FUN_032ae6fc(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  undefined1 auVar4 [16];
  
  auVar4 = (**(code **)(*param_1 + 0x18))();
  if (auVar4._0_8_ != auVar4._8_8_) {
    puVar2 = auVar4._0_8_;
    do {
      puVar3 = puVar2 + 1;
      iVar1 = FUN_032c4870(*puVar2,param_2);
      if (iVar1 == 0) {
        return 1;
      }
      puVar2 = puVar3;
    } while (auVar4._8_8_ != puVar3);
  }
  return 0;
}


