/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01352050; name: FUN_01352050
 */


void FUN_01352050(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x80);
  if (lVar3 == 0) goto LAB_01352090;
  uVar1 = *(uint *)(lVar3 + 0x214);
  uVar2 = uVar1 | 0x10;
  if (((uVar2 == uVar1) || (*(int *)(lVar3 + 0x21c) == 0)) || (*(int *)(lVar3 + 0x224) == 0)) {
    if (uVar1 == 0) {
LAB_013520d4:
      FUN_01bdbf3c(lVar3,uVar2);
      *(uint *)(lVar3 + 0x214) = uVar2;
      goto LAB_01352090;
    }
  }
  else if ((uVar1 == 0) || (*(int *)(lVar3 + 0x21c) == 2)) goto LAB_013520d4;
  *(uint *)(lVar3 + 0x214) = uVar2;
  if ((*(uint *)(lVar3 + 0x210) != uVar2) && (*(int *)(lVar3 + 0x21c) == 0)) {
    *(uint *)(lVar3 + 0x210) = uVar2;
  }
LAB_01352090:
  *(undefined1 *)(param_1 + 0x188) = 6;
  return;
}


