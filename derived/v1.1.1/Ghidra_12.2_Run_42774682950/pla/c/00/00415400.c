/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00415400; name: FUN_00415400
 */


undefined8 FUN_00415400(byte *param_1,int param_2,int param_3,code *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  size_t sVar4;
  undefined8 uVar5;
  byte *pbVar6;
  
  if (param_1 == (byte *)0x0) {
    FUN_004014b0(0xe,0x77,0x73,"external/openssl/crypto/conf/conf_mod.c",0x209);
    uVar5 = 0;
  }
  else {
    if (param_3 != 0) {
      do {
        bVar1 = *param_1;
        if ((bVar1 == 0) || ((bVar1 != 0x20 && (4 < bVar1 - 9)))) {
          pbVar3 = (byte *)strchr((char *)param_1,param_2);
          if ((pbVar3 == param_1) || (bVar1 == 0)) {
            uVar5 = (*param_4)(0,0,param_5);
            iVar2 = (int)uVar5;
          }
          else {
            if (pbVar3 == (byte *)0x0) {
              sVar4 = strlen((char *)param_1);
              pbVar6 = param_1 + sVar4;
              goto LAB_0041552c;
            }
            pbVar6 = pbVar3 + -1;
            bVar1 = *pbVar6;
            while ((bVar1 == 0x20 || (bVar1 - 9 < 5))) {
LAB_0041552c:
              pbVar6 = pbVar6 + -1;
              bVar1 = *pbVar6;
            }
            uVar5 = (*param_4)(param_1,((int)pbVar6 - (int)param_1) + 1,param_5);
            iVar2 = (int)uVar5;
          }
          if (iVar2 < 1) {
            return uVar5;
          }
          param_1 = pbVar3;
          if (pbVar3 == (byte *)0x0) goto LAB_0041558c;
        }
        param_1 = param_1 + 1;
      } while( true );
    }
    do {
      pbVar3 = (byte *)strchr((char *)param_1,param_2);
      if ((pbVar3 == param_1) || (*param_1 == 0)) {
        uVar5 = (*param_4)(0,0,param_5);
        iVar2 = (int)uVar5;
      }
      else {
        if (pbVar3 == (byte *)0x0) {
          sVar4 = strlen((char *)param_1);
          iVar2 = (int)param_1 + (int)sVar4;
        }
        else {
          iVar2 = (int)pbVar3;
        }
        uVar5 = (*param_4)(param_1,iVar2 - (int)param_1,param_5);
        iVar2 = (int)uVar5;
      }
      if (iVar2 < 1) {
        return uVar5;
      }
      param_1 = pbVar3 + 1;
    } while (pbVar3 != (byte *)0x0);
LAB_0041558c:
    uVar5 = 1;
  }
  return uVar5;
}


