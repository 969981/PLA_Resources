/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e7044; name: FUN_001e7044
 */


uint FUN_001e7044(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 auStack_150 [256];
  
  uVar1 = (uint)param_2;
  if ((*(byte *)(param_1 + 0x15a5) >> 3 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x10);
    FUN_001df970(lVar5);
    FUN_001fd0f8(param_1,lVar5);
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1d0));
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    FUN_002044d4(*(undefined8 *)(param_1 + 0x1c8));
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    if ((uVar1 < 0x2b) && ((1L << (param_2 & 0x3f) & 0x40004800000U) != 0)) {
      param_3 = 1;
    }
    pcVar3 = *(code **)(*(long *)(lVar5 + 0x420) + 0x18);
    if (pcVar3 != (code *)0x0) {
      uVar1 = (*pcVar3)(lVar5,param_2 & 0xffffffff,param_3 & 1);
    }
    uVar6 = 0x2a;
    if (uVar1 != 0x2a) {
      iVar2 = FUN_001f2798(lVar5);
      uVar6 = 0x2a;
      if (iVar2 == 0 || uVar1 != 0) {
        uVar6 = uVar1;
      }
    }
    FUN_001e9640(*(undefined8 *)(param_1 + 0xd8));
    if ((*(long *)(lVar5 + 0x4c0) == 0) && (*(long *)(lVar5 + 0x4e0) == 0)) {
      *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) | 0x800;
      if (*(long *)(lVar5 + 0x68) != 0) {
        FUN_001e181c(param_1);
        *(undefined8 *)(lVar5 + 0x68) = 0;
      }
      FUN_001e11bc(param_1);
      FUN_002044d4(*(undefined8 *)(param_1 + 0x1138));
      *(undefined8 *)(param_1 + 0x1138) = 0;
      if (*(int *)(param_1 + 0x1168) != 0) {
        uVar7 = 0;
        puVar4 = (undefined8 *)(param_1 + 0x1170);
        do {
          FUN_002044d4(*puVar4);
          uVar7 = uVar7 + 1;
          puVar4 = puVar4 + 3;
        } while (uVar7 < *(uint *)(param_1 + 0x1168));
      }
      *(undefined4 *)(param_1 + 0x1168) = 0;
      if ((((*(byte *)(param_1 + 0xf43) >> 4 & 1) == 0) &&
          (uVar1 = *(uint *)(lVar5 + 0x3fc), (uVar1 & 1) == 0)) &&
         (((param_3 & 1) == 0 || ((*(byte *)(*(long *)(lVar5 + 0x420) + 0x85) >> 1 & 1) != 0)))) {
        if ((uVar1 >> 6 & 1) == 0) {
          if ((uVar1 >> 5 & 1) == 0) {
            if ((uVar1 >> 2 & 1) == 0) {
              puVar4 = (undefined8 *)(lVar5 + 0xd8);
            }
            else {
              puVar4 = (undefined8 *)(lVar5 + 0x108);
            }
          }
          else {
            puVar4 = (undefined8 *)(lVar5 + 0x168);
          }
        }
        else {
          puVar4 = (undefined8 *)(lVar5 + 0x128);
        }
        FUN_001e64cc(auStack_150,0x100,"Connection #%ld to host %s left intact",
                     *(undefined8 *)(lVar5 + 0x60),*puVar4);
        uVar7 = FUN_001df49c(lVar5);
        if ((uVar7 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x1118) = 0;
        }
        else {
          *(long *)(param_1 + 0x1118) = lVar5;
          FUN_001f3934(param_1,&DAT_039b05f7,auStack_150);
        }
      }
      else {
        uVar1 = FUN_001fcddc(param_1,lVar5,param_3 & 1);
        if (uVar1 == 0 || uVar6 != 0) {
          uVar1 = uVar6;
        }
        uVar6 = uVar1;
      }
      *(undefined8 *)(param_1 + 0x10) = 0;
      FUN_001fca50(param_1);
    }
    else {
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}


