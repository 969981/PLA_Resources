/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040aa80; name: FUN_0040aa80
 */


undefined8 * FUN_0040aa80(char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *__ptr;
  char *pcVar3;
  uint uVar4;
  undefined8 local_28;
  
  __ptr = calloc(1,0x18);
  if (__ptr != (undefined8 *)0x0) {
    pcVar3 = strchr(param_2,0x72);
    uVar4 = (uint)(pcVar3 != (char *)0x0);
    pcVar3 = strchr(param_2,0x77);
    if ((pcVar3 != (char *)0x0) || (pcVar3 = strchr(param_2,0x2b), pcVar3 != (char *)0x0)) {
      uVar4 = uVar4 | 2;
    }
    pcVar3 = strchr(param_2,0x61);
    if (pcVar3 != (char *)0x0) {
      uVar4 = 7;
    }
    uVar1 = nn::fs::OpenFile((FileHandle *)&local_28,param_1,uVar4);
    if ((uVar1 == 0) ||
       (((((uVar4 & 6) != 0 && ((uVar1 & 0x3fffff) == 0x202)) &&
         (iVar2 = nn::fs::CreateFile(param_1,0), iVar2 == 0)) &&
        (iVar2 = nn::fs::OpenFile((FileHandle *)&local_28,param_1,uVar4), iVar2 == 0)))) {
      *__ptr = local_28;
      *(uint *)(__ptr + 2) = uVar4;
    }
    else {
      free(__ptr);
      __ptr = (undefined8 *)0x0;
    }
  }
  return __ptr;
}


