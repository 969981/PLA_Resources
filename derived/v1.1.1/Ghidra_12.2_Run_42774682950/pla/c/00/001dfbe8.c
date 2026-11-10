/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dfbe8; name: FUN_001dfbe8
 */


undefined8 FUN_001dfbe8(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  
  lVar3 = *param_1;
  puVar4 = *(undefined8 **)(lVar3 + 0x1288);
  auVar5 = FUN_001f8fb4();
  uVar1 = FUN_001f8fe0(auVar5._0_8_,auVar5._8_8_,*puVar4,puVar4[1]);
  if ((int)uVar1 < 3) {
    uVar2 = 0;
  }
  else if ((int)uVar1 < 0x33) {
    uVar2 = (ulong)(uVar1 & 0xff) / 3;
  }
  else {
    uVar2 = 0x32;
    if (0xfa < (int)uVar1) {
      uVar2 = 200;
    }
  }
  FUN_001e6b54(lVar3,uVar2,1);
  return 0;
}


