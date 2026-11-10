/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021f158; name: FUN_0021f158
 */


void FUN_0021f158(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x40) != '\0') {
    lVar1 = FUN_00876bf0(*(undefined8 *)(param_1 + 0x30));
    if (*(long *)(lVar1 + 0x48) != 0) {
      lVar2 = *(long *)(param_1 + 0x50);
      FUN_0087eb6c(*(undefined8 *)(lVar2 + 0x80),param_2);
      FUN_0087ecf8(*(undefined8 *)(lVar2 + 0x88),param_2);
      if (*(long *)(lVar1 + 0x48) == *(long *)(lVar1 + 0x40)) {
        FUN_00878520(*(long *)(lVar1 + 0x48),param_2);
      }
      *(undefined8 *)(lVar1 + 0x48) = 0;
    }
    FUN_0021f4b4(param_1 + 0x28,0,0xc,0,0,0,1);
    *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return;
}


