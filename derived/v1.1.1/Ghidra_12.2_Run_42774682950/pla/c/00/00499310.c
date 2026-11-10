/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00499310; name: FUN_00499310
 */


long FUN_00499310(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = thunk_FUN_004242f0();
  if (lVar1 != 0) {
    uVar2 = FUN_0040c480(PTR_PTR_04374560);
    *(undefined8 *)(lVar1 + 8) = uVar2;
    uVar2 = FUN_0040c480(PTR_PTR_04374568);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    lVar3 = FUN_0040c480(PTR_PTR_04374570);
    *(long *)(lVar1 + 0x40) = lVar3;
    if (((lVar3 == 0) || (*(long *)(lVar1 + 8) == 0)) || (*(long *)(lVar1 + 0x10) == 0)) {
      FUN_00424410(lVar1);
      return 0;
    }
  }
  return lVar1;
}


