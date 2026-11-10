/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00399f10; name: FUN_00399f10
 */


long FUN_00399f10(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (lVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(lVar1 + 0x18) = 0;
    FUN_0031a934(lVar1,param_2);
  }
  else {
    if (*(long *)(lVar1 + 0x70) != 0) {
      FUN_0032cf88(lVar1,0,0x30);
    }
    lVar1 = FUN_0032cea0(lVar1,0x30);
    lVar2 = *param_1;
    *(undefined4 *)(lVar1 + 0x18) = 0;
    FUN_0031a934(lVar1,param_2);
    FUN_0039aa6c(lVar2,lVar1);
  }
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return lVar1;
}


