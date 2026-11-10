/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004016d0; name: FUN_004016d0
 */


void FUN_004016d0(void)

{
  byte bVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)FUN_004015a0();
  if (puVar4 != (undefined4 *)0x0) {
    bVar1 = *(byte *)(puVar4 + 0x50);
    lVar2 = 0;
    puVar3 = puVar4;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        FUN_00400420(*(undefined8 *)((long)puVar4 + lVar2 + 0xc0),
                     "external/openssl/crypto/err/err.c",0x1c0);
        *(undefined8 *)((long)puVar4 + lVar2 + 0xc0) = 0;
      }
      puVar3[0x50] = 0;
      *puVar3 = 0;
      *(undefined8 *)((long)puVar4 + lVar2 + 0x40) = 0;
      *(undefined8 *)((long)puVar4 + lVar2 + 0x180) = 0;
      puVar3[0x80] = 0xffffffff;
      if (lVar2 + 8 == 0x80) break;
      bVar1 = *(byte *)(puVar3 + 0x51);
      lVar2 = lVar2 + 8;
      puVar3 = puVar3 + 1;
    }
    *(undefined8 *)(puVar4 + 0x90) = 0;
  }
  return;
}


