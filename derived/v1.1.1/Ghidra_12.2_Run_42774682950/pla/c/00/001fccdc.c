/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fccdc; name: FUN_001fccdc
 */


int FUN_001fccdc(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00204504(1,0x16f8);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x16f0) = 0xc0dedbad;
    iVar1 = FUN_001df7e8(lVar2,lVar2 + 0x1288);
    if (iVar1 != 0) {
      FUN_002044d4(lVar2);
      return iVar1;
    }
    lVar3 = FUN_002044c4(0x4001);
    *(long *)(lVar2 + 0x1130) = lVar3;
    if (lVar3 != 0) {
      lVar3 = FUN_002044c4(0x100);
      *(long *)(lVar2 + 0x1120) = lVar3;
      if (lVar3 != 0) {
        FUN_001fcb18(lVar2);
        *(undefined8 *)(lVar2 + 0x1128) = 0x100;
        FUN_001e0224(lVar2);
        *(uint *)(lVar2 + 0xfac) = *(uint *)(lVar2 + 0xfac) | 0x10;
        *(undefined8 *)(lVar2 + 0x1118) = 0;
        *(undefined8 *)(lVar2 + 0x1140) = 0xffffffffffffffff;
        FUN_001ef728(lVar2 + 0x1100);
        *param_1 = lVar2;
        return 0;
      }
    }
    thunk_FUN_002044d4(*(undefined8 *)(lVar2 + 0x1288));
    FUN_002044d4(*(undefined8 *)(lVar2 + 0x1130));
    FUN_002044d4(*(undefined8 *)(lVar2 + 0x1120));
    FUN_001fc82c(lVar2);
    FUN_002044d4(lVar2);
  }
  return 0x1b;
}


