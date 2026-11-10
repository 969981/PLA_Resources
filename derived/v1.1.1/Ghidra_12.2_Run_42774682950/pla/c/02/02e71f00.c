/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e71f00; name: FUN_02e71f00
 */


void FUN_02e71f00(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_24 [4];
  
  for (lVar1 = DAT_0440a110; lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x10)) {
    fVar2 = *(float *)(lVar1 + 0x70);
    fVar3 = *(float *)(lVar1 + 0x74);
    fVar4 = *(float *)(lVar1 + 0x60);
    fVar5 = *(float *)(lVar1 + 100);
    fVar6 = *(float *)(lVar1 + 0x68);
    fVar7 = *(float *)(lVar1 + 0x6c);
    *(float *)(lVar1 + 0x5c) = fVar6;
    *(float *)(lVar1 + 0x44) = fVar7 * fVar5 - fVar4 * fVar2;
    *(float *)(lVar1 + 0x48) = fVar7;
    *(float *)(lVar1 + 0x3c) = fVar6 * fVar2 - fVar5 * fVar3;
    *(float *)(lVar1 + 0x40) = fVar4 * fVar3 - fVar7 * fVar6;
    *(float *)(lVar1 + 0x4c) = fVar2;
    *(float *)(lVar1 + 0x50) = fVar3;
    *(float *)(lVar1 + 0x54) = fVar4;
    *(float *)(lVar1 + 0x58) = fVar5;
    FUN_02e44d58(&DAT_0440a0e8,*(undefined8 *)(*(long *)(lVar1 + 8) + 0x48),auStack_24);
  }
  return;
}


