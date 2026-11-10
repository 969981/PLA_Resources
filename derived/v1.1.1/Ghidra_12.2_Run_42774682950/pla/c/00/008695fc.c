/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008695fc; name: FUN_008695fc
 */


undefined8 FUN_008695fc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_70 [56];
  undefined8 local_38;
  
  uVar1 = FUN_007f7e7c();
  if ((uVar1 & 1) != 0) {
    FUN_007fd82c(auStack_70,*param_2,*(undefined4 *)((long)param_2 + 0xc),param_1);
    FUN_007fdac4(auStack_70);
    lVar2 = FUN_007f2084(*(undefined8 *)(param_1 + 0x218));
    if (lVar2 == 0) {
      FUN_007f24c4(*(undefined8 *)(param_1 + 0x218),local_38);
      return 1;
    }
    FUN_007f2084();
  }
  return 0;
}


