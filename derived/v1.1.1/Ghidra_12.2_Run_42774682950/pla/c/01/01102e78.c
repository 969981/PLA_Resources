/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01102e78; name: FUN_01102e78
 */


void FUN_01102e78(long param_1,long *param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = -0x3980;
  lVar3 = 1;
  lVar4 = *param_3;
  do {
    lVar1 = param_1 + lVar2;
    if (*(long *)(lVar1 + 0x3b80) == *param_2) {
      if (*(long *)(lVar1 + 0x3bf8) == lVar4) {
        lVar3 = 0;
LAB_0110304c:
        *(undefined4 *)(param_1 + lVar3 * 0x90 + lVar2 + 0x3bf4) = param_4;
        return;
      }
      if (*(long *)(lVar1 + 0x3c88) == lVar4) goto LAB_0110304c;
      if (*(long *)(lVar1 + 0x3d18) == lVar4) {
        lVar3 = 2;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x3da8) == lVar4) {
        lVar3 = 3;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x3e38) == lVar4) {
        lVar3 = 4;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x3ec8) == lVar4) {
        lVar3 = 5;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x3f58) == lVar4) {
        lVar3 = 6;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x3fe8) == lVar4) {
        lVar3 = 7;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x4078) == lVar4) {
        lVar3 = 8;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x4108) == lVar4) {
        lVar3 = 9;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x4198) == lVar4) {
        lVar3 = 10;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x4228) == lVar4) {
        lVar3 = 0xb;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x42b8) == lVar4) {
        lVar3 = 0xc;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x4348) == lVar4) {
        lVar3 = 0xd;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x43d8) == lVar4) {
        lVar3 = 0xe;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x4468) == lVar4) {
        lVar3 = 0xf;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x44f8) == lVar4) {
        lVar3 = 0x10;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x4588) == lVar4) {
        lVar3 = 0x11;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x4618) == lVar4) {
        lVar3 = 0x12;
        goto LAB_0110304c;
      }
      if (*(long *)(lVar1 + 0x46a8) == lVar4) {
        lVar3 = 0x13;
        goto LAB_0110304c;
      }
    }
    lVar2 = lVar2 + 0xb80;
    if (lVar2 == 0) {
      return;
    }
  } while( true );
}


