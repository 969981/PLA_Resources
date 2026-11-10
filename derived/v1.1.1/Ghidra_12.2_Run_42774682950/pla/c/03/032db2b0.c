/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032db2b0; name: FUN_032db2b0
 */


int FUN_032db2b0(byte *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  
  if (param_1 == (byte *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      if ((((param_1[2] >> 4 & 1) != 0) &&
          (puVar3 = (ulong *)FUN_032e2008(param_1,0x100000), puVar3 != (ulong *)0x0)) &&
         (*puVar3 != 0)) {
        uVar5 = *puVar3 >> 0x1c & 0xf;
        iVar4 = (int)uVar5;
        iVar1 = 1 << uVar5;
        if (iVar4 == 0xf) {
          iVar1 = param_2 << 2;
        }
        iVar2 = 0;
        if (iVar4 != 0) {
          iVar2 = iVar1;
        }
        if (iVar2 <= iVar6) {
          iVar2 = iVar6;
        }
        iVar6 = iVar2;
      }
    } while (((*param_1 & 1) == 0) && (param_1 = *(byte **)(param_1 + 8), param_1 != (byte *)0x0));
  }
  return iVar6;
}


