/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004023e0; name: FUN_004023e0
 */


undefined8 FUN_004023e0(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  
  lVar2 = FUN_004015a0();
  uVar3 = 0;
  if (lVar2 != 0) {
    iVar5 = *(int *)(lVar2 + 0x240);
    if (*(int *)(lVar2 + 0x244) == iVar5) {
LAB_004024b0:
      uVar3 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar2 + (long)iVar5 * 4);
      while (lVar4 = (long)iVar5, (uVar1 & 1) == 0) {
        if ((*(uint *)(lVar2 + lVar4 * 4 + 0x140) & 1) != 0) {
          FUN_00400420(*(undefined8 *)(lVar2 + 0xc0 + lVar4 * 8),"external/openssl/crypto/err/err.c"
                       ,0x385);
          lVar4 = (long)*(int *)(lVar2 + 0x240);
          *(undefined8 *)(lVar2 + 0xc0 + lVar4 * 8) = 0;
        }
        *(undefined4 *)(lVar2 + lVar4 * 4 + 0x140) = 0;
        *(undefined4 *)(lVar2 + (long)*(int *)(lVar2 + 0x240) * 4) = 0;
        iVar5 = *(int *)(lVar2 + 0x240);
        lVar4 = lVar2 + (long)iVar5 * 8;
        *(undefined8 *)(lVar4 + 0x40) = 0;
        *(undefined8 *)(lVar4 + 0x180) = 0;
        *(undefined4 *)(lVar2 + (long)iVar5 * 4 + 0x200) = 0xffffffff;
        iVar5 = *(int *)(lVar2 + 0x240) + -1;
        if (*(int *)(lVar2 + 0x240) < 1) {
          iVar5 = 0xf;
        }
        *(int *)(lVar2 + 0x240) = iVar5;
        if (*(int *)(lVar2 + 0x244) == iVar5) goto LAB_004024b0;
        uVar1 = *(uint *)(lVar2 + (long)iVar5 * 4);
      }
      uVar3 = 1;
      *(uint *)(lVar2 + lVar4 * 4) = uVar1 & 0xfffffffe;
    }
  }
  return uVar3;
}


