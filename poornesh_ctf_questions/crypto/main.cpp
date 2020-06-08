#include <iostream>
#ifndef FUNC0000101001_H
#define FUNC0000101001_H
#include <string>
#include <cstring>
#include <fstream>
//safjuhviuhvusziikvmkfvcdsc
class FUNC0000101001
{
protected:
    typedef unsigned char uint8;
    typedef unsigned int uint32;
    typedef unsigned long long uint64;
//afirejvhyffewfjucjunmjvcdsc
    const static uint32 FUNC011011101_k[];
    static const unsigned int FUNC0110100101_BLOCK_SIZE = (512/8);
public:
    void init();
    void update(const unsigned char *message, unsigned int len);
    void final(unsigned char *digest);
    static const unsigned int DIGEST_SIZE = ( 256 / 8);
//rqqqltfrntqimqpratqatajdhact
protected:
    void transform(const unsigned char *message, unsigned int block_nb);
    unsigned int m_tot_len;
    unsigned int m_len;
    unsigned char m_block[2*FUNC0110100101_BLOCK_SIZE];
    uint32 m_h[8];
};
//vrfvhjiuehfiuarhjvoijavvfdfg
std::string FUNC011011101(std::string input);
//fewirojufvedjujfjnvcf7ewedsc
#define FUNC0101011101_SHFR(x, n)    (x >> n)
#define FUNC0101011101_ROTR(x, n)   ((x >> n) | (x << ((sizeof(x) << 3) - n)))
#define FUNC0101011101_ROTL(x, n)   ((x << n) | (x >> ((sizeof(x) << 3) - n)))
#define FUNC0101011101_CH(x, y, z)  ((x & y) ^ (~x & z))
#define FUNC0101011101_MAJ(x, y, z) ((x & y) ^ (x & z) ^ (y & z))
#define FUNC0000101001_F1(x) (FUNC0101011101_ROTR(x,  2) ^ FUNC0101011101_ROTR(x, 13) ^ FUNC0101011101_ROTR(x, 22))
#define FUNC0000101001_F2(x) (FUNC0101011101_ROTR(x,  6) ^ FUNC0101011101_ROTR(x, 11) ^ FUNC0101011101_ROTR(x, 25))
#define FUNC0000101001_F3(x) (FUNC0101011101_ROTR(x,  7) ^ FUNC0101011101_ROTR(x, 18) ^ FUNC0101011101_SHFR(x,  3))
#define FUNC0000101001_F4(x) (FUNC0101011101_ROTR(x, 17) ^ FUNC0101011101_ROTR(x, 19) ^ FUNC0101011101_SHFR(x, 10))
#define FUNC0101011101_UNPACK32(x, str)                 \
{                                             \
    *((str) + 3) = (uint8) ((x)      );       \
    *((str) + 2) = (uint8) ((x) >>  8);       \
    *((str) + 1) = (uint8) ((x) >> 16);       \
    *((str) + 0) = (uint8) ((x) >> 24);       \
}
#define FUNC0101011101_PACK32(str, x)                   \
{                                             \
    *(x) =   ((uint32) *((str) + 3)      )    \
           | ((uint32) *((str) + 2) <<  8)    \
           | ((uint32) *((str) + 1) << 16)    \
           | ((uint32) *((str) + 0) << 24);   \
}
#endif
//desfcmiuhyufvvudscomdekidjm
using std::string;
using std::cout;
using std::endl;
//rqqqltfrntqimqpratqatajdhact
const unsigned int FUNC0000101001::FUNC011011101_k[64] = //UL = uint32
            {0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5,
             0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
             0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
             0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
             0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc,
             0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
             0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7,
             0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
             0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
             0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
             0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3,
             0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
             0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5,
             0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
             0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
             0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2};
int main(int argc, char *argv[])
{
    float key;
    string input;
    std::cout<<"ENTER THE PLAIN TEXT:\n";//????????????????????????????????????????????????????????
    std::cin>>input;
    std::cout<<"\n";
    std::cout<<"ENTER THE KEY:\n";
    std::cin>>key;
    if(key==4732587931)
    {
    string output1 = FUNC011011101(input);
//desfcmiuhyufvvudscomdekidjm
    cout << "CIPHER TEXT: " << output1 << endl;//7e050241e0d064f85eb2cc37f47922ee147687c21fa954e5c2c4ad7e8255934a
    }
    else if(key==6523874091)
    {
    cout<<"CIPHER TEXT TO BE DECRYPTED IS:"<<"\n"<<"7e050241e0d064f85eb2cc37f47922ee147687c21fa954e5c2c4ad7e8255934a";
    }
    else if(key==7654389405)
    {
    std::cout<<"\nteeedkimfewfqsruyiuykigtqwet\n";//01
    std::cout<<"rtttxdxstfcvcfdciujnlkmmlkmy\n";//02
    std::cout<<"rqqqltfrntqimqpratqatajdhact\n";//03
    std::cout<<"rotyihujnfdsrwascfrrcrcfvcht\n";//04
    std::cout<<"tweakygtfrswzxfcggireadasxcy\n";//05
    std::cout<<"rotyihujnfdsrwascfrrcrcfvcht\n";//06
    std::cout<<"rqqqltfrntqimqpratqatajdhact\n";//07
    std::cout<<"teeedkimfewfqsruyiuykigtqwet\n";//08
    std::cout<<"rtttxdxstfcvcfdciujnlkmmlkmy\n";//09
    std::cout<<"kmlihytfrreserfyujwrognurrde\n";//10
    std::cout<<"tweakygtfrswzxfcggireadasxcy\n";//11
    std::cout<<"itreacntdaamnhableeotthismom\n";//12
    std::cout<<"bisibillaswsxcytfcvuyuikjbad\n";//13
    std::cout<<"htyfrdohtgyydedtrustsrexnris\n";//14
    std::cout<<"lkjiuygytrdeeexswrsxscrfygfj\n";//15
    std::cout<<"kmlihytfrreserfyujwrognurrde\n";//16
    std::cout<<"lkjiuygytrdeeexswrsxscrfygfj\n";//17
    std::cout<<"htyfrdohtgyydedtrustsrexnris\n";//18
    std::cout<<"bisibillaswsxcytfcvuyuikjbad\n";//19
    std::cout<<"itreacntdaamnhableeotthismom\n";//20
    }
    else if(key==4839916237)
    {cout<<"YUhSMGMlMlVxRiVITTZMeTlrY21sMlolMkZ1cSVTNW5iMjluYiUyVXFmJUdVdVkyOXRMMjl3JTJVcUYlWlc0L2FXUTlNWFF6SlRKbWRWRSUyZlVxJWxiMlExTXlVeVVYVm1KV0pGTTA1eWNTVSUyUXVmJXlSblZ4SldwTFQlUTJVZiVFNWxKVEpWWmxFbFpsSmFUJUZ1cTIlREFsTW5GR2RTVndTMnclMlF1RiV6YUdoQ1JIbHg";}
    else if(key==9345129853719)
    {
    cout<<"Congrats! You have BRAINS... You are good at Reverse Engineering! FLAG IS WAITING FOR YOU!";
    }
    else
    {cout<<"ERROR";}
    return 0;
}
//vrfvhjiuehfiuarhjvoijavvfdfg
void FUNC0000101001::transform(const unsigned char *message, unsigned int block_nb)
{
    uint32 w[64];
    uint32 wv[8];
    uint32 t1, t2;
    const unsigned char *sub_block;
    int i;
    int j;
    for (i = 0; i < (int) block_nb; i++) {
        sub_block = message + (i << 6);
        for (j = 0; j < 16; j++) {
            FUNC0101011101_PACK32(&sub_block[j << 2], &w[j]);
        }
        for (j = 16; j < 64; j++) {
            w[j] =  FUNC0000101001_F4(w[j -  2]) + w[j -  7] + FUNC0000101001_F3(w[j - 15]) + w[j - 16];
        }
        for (j = 0; j < 8; j++) {
            wv[j] = m_h[j];
        }
        for (j = 0; j < 64; j++) {
            t1 = wv[7] + FUNC0000101001_F2(wv[4]) + FUNC0101011101_CH(wv[4], wv[5], wv[6])
                + FUNC011011101_k[j] + w[j];
            t2 = FUNC0000101001_F1(wv[0]) + FUNC0101011101_MAJ(wv[0], wv[1], wv[2]);
            wv[7] = wv[6];
            wv[6] = wv[5];
            wv[5] = wv[4];
            wv[4] = wv[3] + t1;
            wv[3] = wv[2];
            wv[2] = wv[1];
            wv[1] = wv[0];
            wv[0] = t1 + t2;
        }
        for (j = 0; j < 8; j++) {
            m_h[j] += wv[j];
        }
    }
}
//dskvcifojviufdhvydshcyushcfuajc
void FUNC0000101001::init()
{
    m_h[0] = 0x6a09e667;
    m_h[1] = 0xbb67ae85;
    m_h[2] = 0x3c6ef372;
    m_h[3] = 0xa54ff53a;
    m_h[4] = 0x510e527f;
    m_h[5] = 0x9b05688c;
    m_h[6] = 0x1f83d9ab;
    m_h[7] = 0x5be0cd19;
    m_len = 0;
    m_tot_len = 0;
}
//safjuhviuhvusziikvmkfvcdscds
void FUNC0000101001::update(const unsigned char *message, unsigned int len)
{
    unsigned int block_nb;
    unsigned int new_len, rem_len, tmp_len;
    const unsigned char *shifted_message;
    tmp_len = FUNC0110100101_BLOCK_SIZE - m_len;
    rem_len = len < tmp_len ? len : tmp_len;
    memcpy(&m_block[m_len], message, rem_len);
    if (m_len + len < FUNC0110100101_BLOCK_SIZE) {
        m_len += len;
        return;
    }
    new_len = len - rem_len;
    block_nb = new_len / FUNC0110100101_BLOCK_SIZE;
    shifted_message = message + rem_len;
    transform(m_block, 1);
    transform(shifted_message, block_nb);
    rem_len = new_len % FUNC0110100101_BLOCK_SIZE;
    memcpy(m_block, &shifted_message[block_nb << 6], rem_len);
    m_len = rem_len;
    m_tot_len += (block_nb + 1) << 6;
}
//mcudsnchiusnvijnvcjzmfvvfnvj
void FUNC0000101001::final(unsigned char *digest)
{
    unsigned int block_nb;
    unsigned int pm_len;
    unsigned int len_b;
    int i;
    block_nb = (1 + ((FUNC0110100101_BLOCK_SIZE - 9)
                     < (m_len % FUNC0110100101_BLOCK_SIZE)));
    len_b = (m_tot_len + m_len) << 3;
    pm_len = block_nb << 6;
    memset(m_block + m_len, 0, pm_len - m_len);
    m_block[m_len] = 0x80;
    FUNC0101011101_UNPACK32(len_b, m_block + pm_len - 4);
    transform(m_block, block_nb);
    for (i = 0 ; i < 8; i++) {
        FUNC0101011101_UNPACK32(m_h[i], &digest[i << 2]);
    }
}
//woiewjdujdiuwfhriyfhgfiujfifcmk
std::string FUNC011011101(std::string input)
{
    unsigned char digest[FUNC0000101001::DIGEST_SIZE];
    memset(digest,0,FUNC0000101001::DIGEST_SIZE);
//mcudsnchiusnvijnvcjzmfvvfnvjdxs
    FUNC0000101001 ctx = FUNC0000101001();
    ctx.init();
    ctx.update( (unsigned char*)input.c_str(), input.length());
    ctx.final(digest);
//kwqikdoiejfcccccccjwoadiakcosdc
    char buf[2*FUNC0000101001::DIGEST_SIZE+1];
    buf[2*FUNC0000101001::DIGEST_SIZE] = 0;
    for (int i = 0; i < FUNC0000101001::DIGEST_SIZE; i++)
        sprintf(buf+i*2, "%02x", digest[i]);
    return std::string(buf);
}
