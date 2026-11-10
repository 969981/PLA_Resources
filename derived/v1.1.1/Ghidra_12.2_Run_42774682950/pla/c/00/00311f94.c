/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00311f94; name: FUN_00311f94
 */


undefined2 * FUN_00311f94(long *param_1,undefined2 *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  
  puVar1 = (uint *)*param_1;
  lVar8 = param_1[1];
  if ((int)((ulong)(lVar8 - (long)puVar1) >> 4) < 1) {
    return param_2;
  }
  lVar9 = 0;
  uVar7 = puVar1[1];
  puVar6 = puVar1;
  do {
    if (uVar7 == 3) {
      if (param_2 < (undefined2 *)*param_3) {
        *param_2 = 0x100b;
        uVar7 = *puVar1;
        if (uVar7 < 0x80) goto LAB_00311fe4;
LAB_00312054:
        *(byte *)(param_2 + 1) = (byte)uVar7 | 0x80;
        if (uVar7 >> 0xe == 0) {
          *(char *)((long)param_2 + 3) = (char)(uVar7 >> 7);
          param_2 = param_2 + 2;
        }
        else {
          param_2 = param_2 + 2;
          uVar7 = uVar7 >> 7;
          do {
            puVar5 = param_2;
            uVar2 = uVar7 >> 7;
            *(byte *)((long)puVar5 + -1) = (byte)uVar7 | 0x80;
            param_2 = (undefined2 *)((long)puVar5 + 1);
            uVar3 = uVar7 >> 0xe;
            uVar7 = uVar2;
          } while (uVar3 != 0);
          *(char *)puVar5 = (char)uVar2;
        }
      }
      else {
        param_2 = (undefined2 *)FUN_00310ec4(param_3);
        *param_2 = 0x100b;
        uVar7 = *puVar1;
        if (0x7f < uVar7) goto LAB_00312054;
LAB_00311fe4:
        *(char *)(param_2 + 1) = (char)uVar7;
        param_2 = (undefined2 *)((long)param_2 + 3);
      }
      *(undefined1 *)param_2 = 0x1a;
      puVar4 = (undefined1 *)FUN_0030ddcc(puVar1,(undefined1 *)((long)param_2 + 1),param_3);
      if ((undefined1 *)*param_3 <= puVar4) {
        puVar4 = (undefined1 *)FUN_00310ec4(param_3);
      }
      param_2 = (undefined2 *)(puVar4 + 1);
      *puVar4 = 0xc;
      puVar6 = (uint *)*param_1;
      lVar8 = param_1[1];
    }
    lVar9 = lVar9 + 1;
    if ((int)((ulong)(lVar8 - (long)puVar6) >> 4) <= lVar9) {
      return param_2;
    }
    puVar1 = puVar6 + lVar9 * 4;
    uVar7 = puVar1[1];
  } while( true );
}


