/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309ee04; name: FUN_0309ee04
 */


void FUN_0309ee04(undefined8 param_1,undefined8 param_2,float param_3,float param_4,long param_5,
                 long param_6,ushort param_7,ushort param_8,ushort param_9,ushort param_10,
                 ushort param_11,ushort param_12,undefined1 param_13,byte param_14)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined2 *puVar5;
  long lVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  
  if (*(char *)(param_5 + 0x18) == -1) {
    *(undefined4 *)(param_5 + 8) = 0x7fffffff;
  }
  else {
    iVar7 = *(int *)(param_6 + 0x50);
    lVar6 = *(long *)(param_6 + 0x48);
    iVar2 = iVar7 + 1;
    if ((int)(*(uint *)(param_6 + 0x54) & 0x3fffffff) <= iVar7) {
      lVar6 = FUN_0309ec78(PTR_PTR_0434a080,iVar2,lVar6,iVar7);
      iVar7 = *(int *)(param_6 + 0x50);
      *(long *)(param_6 + 0x48) = lVar6;
    }
    *(int *)(param_6 + 0x50) = iVar2;
    puVar5 = (undefined2 *)(lVar6 + (long)iVar7 * 0xc);
    puVar5[2] = param_7 & 0x3f | (param_8 & 1) << 0xe | puVar5[2] & 0x3fc0;
    FUN_032c8ef0(param_1);
    *puVar5 = extraout_var;
    FUN_032c8ef0(param_2);
    puVar5[1] = extraout_var_00;
    puVar5[2] = (param_9 & 3) << 6 | (param_10 & 3) << 8 | (param_11 & 3) << 10 |
                (param_12 & 3) << 0xc | puVar5[2] & 0xc03f;
    *(undefined1 *)(puVar5 + 4) = param_13;
    if ((param_14 & 1) != 0) {
      iVar2 = *(int *)(param_6 + 0x60);
      lVar3 = *(long *)(param_6 + 0x58);
      if (iVar2 < (int)(*(uint *)(param_6 + 100) & 0x3fffffff)) {
        iVar4 = iVar2;
      }
      else {
        lVar3 = FUN_030a2f70(PTR_PTR_0434a080,iVar2 + 1,lVar3,iVar2);
        *(long *)(param_6 + 0x58) = lVar3;
        iVar4 = *(int *)(param_6 + 0x60);
      }
      pfVar1 = (float *)(lVar3 + (long)iVar4 * 8);
      *(int *)(param_6 + 0x60) = iVar2 + 1;
      *pfVar1 = param_3;
      pfVar1[1] = param_4;
      *(char *)(lVar6 + (long)iVar7 * 0xc + 9) = (char)iVar2;
      *(bool *)(param_5 + 0x61) = param_3 != param_4 || *(char *)(param_5 + 0x61) != '\0';
    }
    *(char *)(param_5 + 0x18) = *(char *)(param_5 + 0x18) + '\x01';
    *(char *)(param_5 + 0x19) = *(char *)(param_5 + 0x19) + (char)param_9;
  }
  return;
}


