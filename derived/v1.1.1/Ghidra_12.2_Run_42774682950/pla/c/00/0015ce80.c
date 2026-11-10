/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015ce80; name: FUN_0015ce80
 */


undefined8 * FUN_0015ce80(long param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0x54);
  puVar7 = (undefined8 *)*param_2;
LAB_0015cec8:
  if (param_3 == 0) {
    return param_2;
  }
  param_3 = param_3 + -1;
  if ((byte)((*(byte *)((long)puVar7 + 9) ^ 3) & (bVar1 ^ 3)) != 0) {
    *(byte *)((long)puVar7 + 9) = *(byte *)((long)puVar7 + 9) & 0xf8 | bVar1 & 3;
    param_2 = puVar7;
    goto LAB_0015d018;
  }
  puVar6 = (undefined8 *)*puVar7;
  *param_2 = puVar6;
  switch(*(undefined1 *)(puVar7 + 1)) {
  case 4:
    FUN_0016d940(param_1,puVar7);
    lVar5 = (ulong)*(byte *)((long)puVar7 + 0xb) + 0x19;
    break;
  case 5:
    FUN_00171d30(param_1,puVar7);
    goto LAB_0015d018;
  case 6:
    if (*(char *)((long)puVar7 + 10) != '\0') {
      lVar5 = 0;
      plVar2 = (long *)puVar7[4];
      do {
        if (((plVar2 == (long *)0x0) || (lVar4 = plVar2[1], plVar2[1] = lVar4 + -1, lVar4 + -1 != 0)
            ) || ((long *)*plVar2 != plVar2 + 2)) {
          uVar3 = (ulong)*(byte *)((long)puVar7 + 10);
          if (uVar3 <= lVar5 + 1U) goto LAB_0015cfb4;
        }
        else {
          FUN_00161510(param_1,plVar2,0x20,0);
          uVar3 = (ulong)*(byte *)((long)puVar7 + 10);
          if (uVar3 <= lVar5 + 1U) goto LAB_0015cfb4;
        }
        lVar5 = lVar5 + 1;
        plVar2 = (long *)(puVar7 + 4)[lVar5];
      } while( true );
    }
    lVar5 = 0x20;
    break;
  case 7:
    lVar5 = puVar7[3] + 0x28;
    break;
  case 8:
    FUN_0016ce40(param_1,puVar7);
    goto LAB_0015d018;
  case 9:
    FUN_0015c960(param_1,puVar7);
    goto LAB_0015d018;
  default:
    goto switchD_0015cf18_caseD_a;
  case 0x14:
    lVar5 = puVar7[2] + 0x19;
    break;
  case 0x26:
    lVar5 = (ulong)*(byte *)((long)puVar7 + 10) << 4;
    goto LAB_0015cffc;
  }
  goto LAB_0015d008;
LAB_0015cfb4:
  lVar5 = uVar3 << 3;
LAB_0015cffc:
  lVar5 = lVar5 + 0x20;
LAB_0015d008:
  FUN_00161510(param_1,puVar7,lVar5,0);
LAB_0015d018:
  puVar6 = (undefined8 *)*param_2;
switchD_0015cf18_caseD_a:
  puVar7 = puVar6;
  if (puVar6 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  goto LAB_0015cec8;
}


